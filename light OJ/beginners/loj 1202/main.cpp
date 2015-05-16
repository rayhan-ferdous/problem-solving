#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    for(int i = 1; i <= k; i++)
    {


        long long x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        cout << "Case " << i << ": " ;

        if( abs(x1-x2) % 2 == 0 and abs(y1-y2) % 2 != 0)
            cout << "impossible" << endl;
        else if( abs(x1-x2) % 2 != 0 and abs(y1-y2) % 2 == 0 )
            cout << "impossible" << endl;

        else
        {
            if(x1 == x2 and y1 == y2)
                cout << 0 << endl;
            else if( abs(y1-y2) == abs(x1-x2) )
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

    }

    return 0;
}
