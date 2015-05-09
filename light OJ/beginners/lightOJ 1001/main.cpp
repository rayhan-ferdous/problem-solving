#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int T, n;

    cin >> T;

    while(T--)
    {
        cin >> n;

        if(n <= 10)
            cout << "0 " << n << endl;
        else
            cout << "10 " << n-10 << endl;
    }

    return 0;
}
