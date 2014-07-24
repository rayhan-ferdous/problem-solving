#include <bits/stdc++.h>

#define inrange(t)  x1 <= x+(b*t)/GCD && x+(b*t)/GCD <= x2 && y1 <= y-(a*t)/GCD && y-(a*t)/GCD <= y2

#define leftofx1    (long long)floor( (((double)x1-(double)x)*(double)GCD)/(double)b )
#define rightofx1   (long long)ceil( (((double)x1-(double)x)*(double)GCD)/(double)b )

#define leftofx2   (long long)floor( (((double)x2-(double)x)*(double)GCD)/(double)b )
#define rightofx2   (long long)ceil( (((double)x2-(double)x)*(double)GCD)/(double)b )

#define leftofy1    (long long)floor( (((double)y-(double)y1)*(double)GCD)/(double)a )
#define rightofy1   (long long)ceil( (((double)y-(double)y1)*(double)GCD)/(double)a )

#define leftofy2   (long long)floor( (((double)y-(double)y2)*(double)GCD)/(double)a )
#define rightofy2   (long long)ceil( (((double)y-(double)y2)*(double)GCD)/(double)a )

long long x, y, GCD;

bool solveDiophantine(long long a, long long b, long long c)
{
    //ax + by = c
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
        return false;

    //equation is soluble
    long long det = c1*d2 - c2*d1;
    long long signa = a>0 ? 1: -1;
    long long signb = b>0 ? 1: -1;

    x = -d1*c*det*signa/gcd;
    y = c1*c*det*signb/gcd;
    GCD = gcd;

    return true;
}

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    long long T, a, b, c, x1, x2, y1, y2, gcd, answer;

    cin >> T;

    for(long long tstcs = 1; tstcs <= T; tstcs++)
    {
        cin >> a >> b >> c >> x1 >> x2 >> y1 >> y2;

        c = -c;

        if(a == 0 and b == 0 and c == 0)
            answer = abs(x2-x1+1)*abs(y2-y1+1);

        else if(a == 0 and b == 0 and c != 0)
            answer = 0;

        else if(a == 0 and b != 0)
            if(c%b == 0)
                if(y1 <= c/b and c/b <= y2)
                    answer = x2-x1+1;
                else
                    answer = 0;
            else
                answer = 0;
                
        else if(a != 0 and b == 0)
            if(c%a == 0)
                if(x1 <= c/a and c/a <= x2)
                    answer = y2-y1+1;
                else
                    answer = 0;
            else
                answer = 0;

        else
        {
            bool report = solveDiophantine(a, b, c);

            if(report == false)
                answer = 0;

            else
            {
                set<long long> S;

                if(inrange(leftofx1))
                    S.insert(leftofx1);
                if(inrange(rightofx1))
                    S.insert(rightofx1);

                if(inrange(leftofx2))
                    S.insert(leftofx2);
                if(inrange(rightofx2))
                    S.insert(rightofx2);

                if(inrange(leftofy1))
                    S.insert(leftofy1);
                if(inrange(rightofy1))
                    S.insert(rightofy1);

                if(inrange(leftofy2))
                    S.insert(leftofy2);
                if(inrange(rightofy2))
                    S.insert(rightofy2);

                long long sz = S.size();


                if(sz == 0)
                    answer = 0;
                if(sz == 1)
                    answer = 1;
                if(sz == 2)
                {
                    set<long long>::iterator it = S.begin();

                    long long high = *it;
                    it++;
                    long long low = *it;

                    answer = abs(high-low)+1;
                }
            }
        }
        
        cout << "Case " << tstcs << ": " << answer << endl;
    }

    return 0;
}
