#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, total, a, b, highest;

    while(cin >> n)
    {
        total = highest = 0;

        while(n--)
        {
            cin >> a >> b;

            total = total - a;
            if(highest < total)
                highest = total;

            total = total + b;
            if(highest < total)
                highest = total;
        }

        cout << highest << endl;

    }

    return 0;
}
