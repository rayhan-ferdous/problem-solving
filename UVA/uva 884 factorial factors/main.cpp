#include <bits/stdc++.h>
#define ll long long
#define nl '\n'

using namespace std;

ll i,j, J, pr[1000010] = {0};

int main()
{

    for( i = 2; i <= 1000000; i++)
        if(pr[i] == 0)
            for(ll j = i; j <= 1000000; j+= i)
            {
                 J = j;

                while(J%i==0)
                {
                    J = J/i;
                    pr[j]++;
                }

            }

    for( i = 0; i <= 1000000; i++)
    {
        pr[i] = pr[i] + pr[i-1];

    }

    while(scanf("%lld", &i) != EOF)
    {
        printf("%lld\n", pr[i]);
    }

    return 0;

}
