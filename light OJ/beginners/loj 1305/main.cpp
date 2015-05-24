#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int ax, ay, bx, by, cx, cy, dx, dy;

        cin >> ax >> ay >> bx >> by >> cx >> cy;

        dx = ax + cx - bx;
        dy = ay + cy - by;

        int A = 0.5 * ( ((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)) );

        cout << "Case " << i << ": " << dx << " " << dy << " " << abs(A) << endl;
    }

    return 0;
}
