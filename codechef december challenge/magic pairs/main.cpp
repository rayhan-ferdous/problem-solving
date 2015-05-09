#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ll n, T;

    cin >> T;

    while(T--)
    {
        cin >> n;
        ll  result = (n*(n-1))/2;

        ll ignor;
        while(n--)
            cin >> ignor;

        cout << result << endl;

    }

    return 0;
}
