#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;

    int n;
    cin >> n;

    string stmnt;

    for(int i = 1; i <= n; i++)
    {
        cin >> stmnt;

        if(stmnt == "++X" or stmnt == "X++")
            x++;
        else
            x--;
    }

    cout << x << endl;

    return 0;
}
