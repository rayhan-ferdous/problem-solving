#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i ++)
    {
        string s;
        cin >> s;

        int letters = s.size();

        if(letters > 10)
        {
            cout << s[0] << letters-2 << s[letters-1] << endl;
        }
        else
            cout << s << endl;

    }

    return 0;
}
