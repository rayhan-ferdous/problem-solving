#include <bits/stdc++.h>

#define     ll      long long int
#define     ull     unsigned long int
#define     vi      vector<int>

#define     is      ==
#define     nl      '\n'
#define     vll     vector<long long int>
#define     pb      push_back
#define     sf      scanf
#define     pf      printf

#define     For(i, a, b)    for(i = a; i <= b; i++)
#define     For(i,  n)      for(i = 1; i <= n; i++)

#define     dbugall(v)      for(int kkk = 0; kkk < v.size(); kkk++){cout << kkk << ". " << v[kkk] << nl << nl;}
#define     dbug(x)         cout << x << nl << nl;

using namespace std;

int main()
{
    int t;
    sf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        double L, W, a, b, c;

        sf("%lf %lf", &L, &W);

        double r1, r2, x;

        c = L*W;
        b = -4.0*(L+W);
        a = 12.0;

        r1 = (-b+sqrt(b*b-4.0*a*c))/(2.0*a);
        r2 = (-b-sqrt(b*b-4.0*a*c))/(2.0*a);

        x = min(r1, r2);

        double r = (L-2*x)*(W-2*x)*x ;

        pf("Case %d: %.8lf\n", i,  r);



















    }

    return 0;
}
