#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in", "r", stdin);

    double ox, oy, ax, ay, bx, by;
    double pi = 3.14159265359;
    int T;

    cin >> T;

    for(int kase = 1; kase <= T; kase++)
    {
        cin >> ox >> oy >> ax >> ay >> bx >> by;

        double a = sqrt( (ox-bx)*(ox-bx) + (oy-by)*(oy-by) );
        double b = sqrt( (ox-ax)*(ox-ax) + (oy-ay)*(oy-ay) );
        double c = sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );

        double costheta = (a*a + b*b - c*c)/(2*a*b);

        double theta = acos(costheta);

        double r = a;

        if(a == 0 or b == 0)
            printf("Case %d: %lf\n", kase, 0);
        else
            printf("Case %d: %.9lf\n", kase, r*theta);



    }


    return 0;
}
