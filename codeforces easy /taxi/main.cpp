#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while(cin >> n)
    {
        int L[5] = {0, 0, 0, 0, 0};

        for(int i = 1; i <= n; i++)
        {
            int s;
            cin >> s;
            L[s]++;
        }

        int ans = 0;
        int k;

        ans += L[4];

        if(L[3] >= L[1])
        {
            k = L[1];
            L[3] -= k;
            L[1] -= k;
            ans += k;
        }

        if(L[3] < L[1])
        {
            k = L[3];
            L[3] -= k;
            L[1] -= k;
            ans += k;
        }

        if(L[3] > 0)
        {
            k = L[3];
            L[3] -= k;
            ans += k;
        }

        k = L[2]/2;
        L[2] %= 2;
        ans += k;

        if(L[2] == 1 and L[1] == 0)
        {
            k = L[2];
            ans += k;
            L[2] -= k;
        }

        if(L[2] == 1 and L[1] == 1)
        {
            k = L[2];
            L[2] -= k;
            L[1] -= k;
            ans += k;
        }

        if(L[2] == 1 and L[1] > 1)
        {
            k = L[2];
            L[2] -= k;
            L[1] -= k*2;
            ans += k;
        }



        k = L[1]/4;
        L[1] %= 4;
        ans += k;

        if(L[1] > 0)
            ans++;

        cout << ans << endl;

    }

    return 0;
}
