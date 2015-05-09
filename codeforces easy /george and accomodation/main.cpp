#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;

    while(cin >> n)
    {
        int c = 0;

        for(int i = 1; i <= n; i++)
        {
            cin >> p >> q;

            if(q-p >= 2)
                c++;
        }

        cout << c << endl;
    }

    return 0;
}
