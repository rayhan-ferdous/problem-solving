#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, l, t;

    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> m >> l;

        cout << "Case " << i << ": " << 4*abs(m-l)+4*m+19 << endl;
    }

    return 0;
}
