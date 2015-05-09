#include <bits/stdc++.h>
#define For(i, a, b) for(i = a; i <= b; i++)
using namespace std;

bool isInside(int x1, int y1, int x2, int y2, int a, int b)
{
    if(x1 < a and a < x2 and y1 < b and b < y2)
        return true;

    return false;
}

int i;

int main()
{
    int T;
    cin >> T;

    For(i, 1, T)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int M;
        cin >> M;

        cout << "Case " << i << ":" << endl;

        while(M--)
        {
            int a, b;
            cin >> a >> b;

            if(x1 < a and a < x2 and y1 < b and b < y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }
















    return 0;
}
