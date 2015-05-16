#include <bits/stdc++.h>
#define pi 3.14159265359

using namespace std;

int main()
{
    double r1, r2, r3;
    int kase = 1;
    int t;
    cin >> t;

    while(cin >> r1 >> r2 >> r3)
    {
        double a = r1+r2;
        double b = r2+r3;
        double c = r3+r1;
        double s = (a+b+c)/2;

        double area = sqrt( s*(s-a)*(s-b)*(s-c) );

        double A = acos( (b*b+c*c-a*a)/(2*b*c) );
        double B = acos( (c*c+a*a-b*b)/(2*c*a) );
        double C = acos( (a*a+b*b-c*c)/(2*a*b) );

        double part1 = r3*r3*A/2;
        double part2 = r1*r1*B/2;
        double part3 = r2*r2*C/2;

        cout.precision(10);

        cout << "Case " << kase++ << ": " << area-part1-part2-part3 << endl;
    }


    return 0;
}
