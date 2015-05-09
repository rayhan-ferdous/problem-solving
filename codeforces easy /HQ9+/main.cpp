#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;

    while(cin >> line)
    {
        int rep = 0;

        int sz = line.size()-1;

        for(int i = 0; i <= sz; i++)
        {
            char ch = line[i];

            if(ch == 'H' or ch == 'Q' or ch == '9' )
            {
                rep = 1;
                break;
            }
        }

        if(rep)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
