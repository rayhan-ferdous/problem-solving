#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

long long LCM(long long a, long long b)
{
    return a * b / GCD(a, b);
}

int main()
{
    freopen("in", "r", stdin);
    long long n;

    while(cin >> n and n != 0)
    {
        vector<long long> divisor;

        long long root = sqrt(n);

        for (long long i=1; i <= root; i++)
        {
            if ( n % i == 0 )
            {
                divisor.push_back( i );

                if ( i != n/i )
                    divisor.push_back( n / i );
            }
        }

        long long counter = 0;

        long long num = divisor.size();

        for(long long i = 0; i < num; i++)
        {
            for(long long j = i; j < num; j++)
            {
                if( (divisor[i]*divisor[j])/GCD(divisor[i], divisor[j]) == n )
                    counter++;
            }
        }

        cout << n << " " << counter << endl;

    }

    return 0;
}
