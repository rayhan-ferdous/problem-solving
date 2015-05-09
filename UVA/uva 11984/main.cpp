#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long int T, i = 1;

    cin >> T;

    while(T--)
    {
        float C, d;

        cin >> C >> d;
        d = C + (5.0/9.0)*d;

        printf("Case %lld: %.2f\n", i++, d);
    }

    return 0;
}
