long long x, y;

long long  solveDiophantine(long long a, long long b, long long c)
{
            //ax + by = c
            
	//special case
	if (a==0 && b==0 && c==0)
	{           x = 0;
		y = 0;
		return 1;
	}

	long long a1 = abs(a);
	long long b1 = abs(b);
	long long c1 = 0, c2 = 1;
	long long d1 = 1, d2 = 0;

	while( b1 > 0)
	{
		long long mult = a1/b1;
		long long temp = c2;
		c2 = c2*mult+c1;
		c1 = temp;
		temp = d2;
		d2 = d2*mult + d1;
		d1 = temp;
		temp = b1;
		b1 = a1%b1;
		a1 = temp;
	}
            
            //equation is not soluble
	long long gcd = a1;
	if (gcd == 0 || abs(c)%gcd != 0)
	{
		return 0;
	}
            
            //equation is soluble
	long long det = c1*d2 - c2*d1;
	long long signa = a>0 ? 1: -1;
	long long signb = b>0 ? 1: -1;

	x = -d1*c*det*signa/gcd;
	y = c1*c*det*signb/gcd;

	return 2;
}