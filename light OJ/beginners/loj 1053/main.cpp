#include <bits/stdc++.h>

using namespace std;

int pyth(long long a, long long b, long long c)
{
    if(a*a + b*b == c*c)
        return 1;

    return 0;
}

int main()
{
    int t;
    cin >> t;
    long long a, b, c;

    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;

        cout << "Case " << i << ": " ;

        if( pyth(a,b,c) or pyth(b,c,a) or pyth(c,a,b) )
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
