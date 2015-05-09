#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

int main()
{
    long long a, b, n;

    while(cin >> a >> b >> n)
    {
        int s = 1;
        long long t;

        while(1)
        {
            if(s == 1)
            {
                t = GCD(a,n);
            }
            else if(s == -1)
            {
                t = GCD(b,n);
            }



            if(t <= n)
            {
                n = n-t;
                s = -s;
            }
            else
            {
                if(s == 1)
                    cout << 1 << endl;
                else
                    cout << 0 << endl;

                break;
            }
        }

    }


    return 0;
}
