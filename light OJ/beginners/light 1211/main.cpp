#include <bits/stdc++.h>

#define     ll      long long int
#define     ull     unsigned long int
#define     is      ==
#define     nl      '\n'
#define     vll     vector<long long int>
#define     pb      push_back

#define     For(i, a, b)    for(i = a; i <= b; i++)
#define     For(i,  n)      for(i = 1; i <= n; i++)
#define     Testcase(t)     ll TTT, t;      cin >> TTT;     for(t = 1; t <= TTT; t++)
#define     Case(t)         "Case " << t << ": "

#define     dbugall(v)      for(int kkk = 0; kkk < v.size(); kkk++){cout << kkk << ". " << v[kkk] << nl << nl;}
#define     dbug(x)         cout << x << nl << nl;

using namespace std;

vll vx, vy, vz;
int i;

ll X1, X2, X3, Y1, Y2, Y3, Z1, Z2, Z3, a1, b1, c1, a2, b2, c2;
ll A1, A2, B1, B2, C1, C2;
bool ok = true;

int main()
{
    Testcase(t)
    {
        //range is specified
        X1 = Y1 = Z1 = INT_MIN;
        X2 = Y2 = Z2 = INT_MAX;

        //number of cubes
        int n;
        cin >> n;

        //for each cube
        For(i, n)
        {
            vx.clear();
            vy.clear();
            vz.clear();

            cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

            vx.pb(X1);
            vx.pb(X2);
            vx.pb(a1);
            vx.pb(a2);

            vy.pb(Y1);
            vy.pb(Y2);
            vy.pb(b1);
            vy.pb(b2);

            vz.pb(Z1);
            vz.pb(Z2);
            vz.pb(c1);
            vz.pb(c2);

            sort(vx.begin(), vx.end());
            sort(vy.begin(), vy.end());
            sort(vz.begin(), vz.end());

            A1 = vx[1];
            A2 = vx[2];

            B1 = vy[1];
            B2 = vy[2];

            C1 = vz[1];
            C2 = vz[2];

            if(     X1 <= A1 and A1 <= X2
               and  a1 <= A1 and A1 <= a2

               and  Y1 <= B1 and B1 <= Y2
               and  b1 <= B1 and B1 <= b2

               and  Z1 <= C1 and C1 <= Z2
               and  c1 <= C1 and C1 <= c2
               )

            {

                X1 = A1;
                X2 = A2;

                Y1 = B1;
                Y2 = B2;

                Z1 = C1;
                Z2 = C2;
            }

            else
                ok = false;
        }

        if(ok is true)
            cout << Case(t) << abs( (A1-A2)*(B1-B2)*(C1-C2) ) << nl;

        else
            cout << Case(t) << 0 << nl;
    }

    return 0;
}
