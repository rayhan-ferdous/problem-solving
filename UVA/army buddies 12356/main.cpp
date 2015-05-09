#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long Left[100010], Right[100010];
ll L, R;
ll S, B, i;

int main()
{
    //freopen("in", "r", stdin);

    while(scanf("%lld%lld", &S, &B) != EOF )
    {

        if(S == 0 and B == 0)
            break;
        /// -1 means no neighbour
        /// 0 means itself doesn't exist

        for( i = 1; i <= S; i++)
        {
            Left[i] = i-1;
            Right[i] = i+1;

        }

        Left[1] = Right[S] = -1;

        for( i = 1; i <= B; i++)
        {
            scanf("%lld%lld", &L, &R);

            Right[Left[L]] = Right[R];
            Left[Right[R]] = Left[L];

            if(Left[L] == -1)
                printf("* ");
            else
                printf("%lld ", Left[L]);

            if(Right[R] == -1)
                printf("*\n");
            else
                printf("%lld\n", Right[R]);
        }

        printf("-\n");


    }








    return 0;
}
