#include <bits/stdc++.h>

using namespace std;

int lst[3010];
int diff[3010];

int main()
{
    int n;
    int d;

    while(cin >> n)
    {
        ///no differences
        for(int i = 1; i <= 3005; i++)
            diff[i] = 0;
        ///input list
        for(int i = 1; i <= n; i++)
        {
            cin >> lst[i];
        }

        ///getting diffs
        for(int i = 2; i <= n; i++)
        {
            d = abs(lst[i]-lst[i-1]);
            //cout << d << endl;
            diff[d] = 1;
        }

        ///testing all is to be true
        bool result = 1;

        for(int i = 1; i <= n-1; i++)
        {
            result = result and diff[i];

        }

        //for(int i = 0; i <= n; i++)
          //  cout << diff[i] << "  " ;

        //cout << endl;

        if(result)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";

    }

    return 0;
}
