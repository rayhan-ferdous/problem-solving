#include <bits/stdc++.h>

using namespace std;

double n, k;

int main()
{


    while(cin >> n >>k)
    {
        printf("%.0lf\n", pow(k, 1/n));
    }
    return 0;
}
