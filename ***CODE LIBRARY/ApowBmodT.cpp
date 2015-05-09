long long ApowBmodT(long long a, long long b, long long T) {

	long long r=1;
	
	while(b){
		if(b%2) r=(r*a)%T;
		a=(a*a)%T;
		b/=2;
	}
	
	return (int)r;
}
