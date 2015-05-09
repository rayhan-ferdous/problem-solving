#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n, k;

    while(cin >> n >> k)
    {
        long long int Max = n/k, S = 0;

        for(long long int i = 0; i < Max; i++)
            S = S + (long long int)pow( (double)k , (double)i );

        long long int R = S + n%k;

        cout << R << endl;

    }


    return 0;
}
