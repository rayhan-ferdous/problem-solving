#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    int a, b, c;
    long long p = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        if(a+b+c >= 2)
            p++;

    }

    cout << p << endl;

    return 0;
}
