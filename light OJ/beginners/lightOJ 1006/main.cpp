#include <stdio.h>
#include <iostream>
#include <limits.h>

using namespace std;

int a, b, c, d, e, f;

int fn( int n )
{
    switch(n)
    {
    case 0 :
        return a;
    case 1:
        return b;
    case 2:
        return c;
    case 3:
        return d;
    case 4:
        return e;
    case 5:
        return f;
    default:
        return fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
    }
}
int main()
{
    freopen("in.txt", "r", stdin);

    int n, caseno = 0, T;
    cin >> T;

    while( T-- )
    {
        cin >>a >> b >> c >> d >> e >> f >> n;

        cout << "Case " << ++caseno << ": " << fn(n) % 10000007 << endl;
    }
    return 0;
}
