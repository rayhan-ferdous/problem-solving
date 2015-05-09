#include <bits/stdc++.h>
#define For(i, a, b) for(i = a; i <= b; i++)

typedef double type;
using namespace std;

int i;

type R, r, x, n, A;

int main()

{
    int T;
    cin >> T;

    For(i, 1, T)
    {
        cin >> R >> n;
        x = (type)(180.0/n);
        x = x*(3.141592654/180.0);
        A = (type)( 1.0/sin(x) );
        A = A + 1.0;
        r = (type)(R/A);

        printf("Case %d: %.10lf\n", i, r);


    }

    return 0;
}
