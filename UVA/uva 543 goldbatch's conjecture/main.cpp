#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define sf scanf
#define pf printf
#define inf INFINITY
#define nl "\n"

#define For(i, a, b)    for( i = a; i <= b; i++)
#define Loop(n)         ll zzz = n;    while(zzz--)
#define Testloop        ll T;    cin >> T;    for(ll testcase = 1; testcase <= T; testcase++)
#define case_part       "Case " << testcase << ": "

#define FILEIN    freopen("in.txt", "r", stdin);
#define FILEOUT   freopen("out.txt", "w", stdout);

using namespace std;

ll pr[1000010] = {0};
ll i,j;

int iseven(int x)
{
    return !(x&1);
}

int main()
{

    pr[0] = pr[1] = 1;
    for(i=2;i<=1010;i++)
        if(pr[i]==0)
            for(j=i+i;j<=1000000;j+=i)
                pr[j]=1;

    ll n;

    while(cin >> n && n!= 0)
    {
        ll p, x, conj = 0;

        For(p, 3, 1000000)
        {
            if(pr[p] == 0)
            {
                x = n-p;
                if(pr[x] == 0)
                {
                    conj = 1;
                    break;

                }
            }
        }

        if(conj == 1)
            cout << n << " = " << p << " + " << x << nl;
        else
            cout << "Goldbach's conjecture is wrong" << nl;
    }


















    return 0;
}
