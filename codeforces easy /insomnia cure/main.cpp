#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k, l, m, n, d;

    while(cin >> k >> l >> m >> n >> d)
    {
        long long c = 0;

        for(long long i = 1; i <= d; i++)
        {
            if(i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0)
                c++;

        }

        cout << c << endl;
    }



    return 0;
}
