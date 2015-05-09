#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long x, T;
    double dx;

    cin >> T;

    while(T--)
    {
        cin >> x;

        dx = (double)x;
        printf("%.0f\n", pow(dx, .5));
    }



    return 0;
}
