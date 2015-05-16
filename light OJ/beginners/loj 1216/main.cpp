#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    double r1, r2, h, p, pi = 3.14159265359;

    for(int i = 1; i <= t; i++)
    {
        cin >> r1 >> r2 >> h >> p;

        double ans = pi*( (r1-r2)*(r1-r2)*p*p*p/h/h/3 + (r1-r2)*r2*p*p/h + r2*r2*p );

        printf("Case %d: %.10lf\n", i, ans);

    }

    return 0;
}
