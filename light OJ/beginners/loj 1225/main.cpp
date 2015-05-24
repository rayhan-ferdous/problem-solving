#include <bits/stdc++.h>

using namespace std;

int palind(long long n) {
    int nn = n, m = 0;
    while (nn) {
        m = m * 10 + nn % 10;
        nn /= 10;
    }
    return m == n;
}

int main()
{
    freopen("in", "r", stdin);

    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++)
    {
        long long n;
        scanf("%lld", &n);

        if(palind(n))
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }



    return 0;
}
