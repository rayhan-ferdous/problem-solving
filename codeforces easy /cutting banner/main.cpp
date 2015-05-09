#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(cin >> s)
    {
        string ans = "";
        int i = 0;
        int sz = s.size()-1;

        for(i = 0; i <= sz; i++)
            if(s[i] == 'C')
                {ans = ans + 'C'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'O')
                {ans = ans + 'O'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'D')
                {ans = ans + 'D'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'E')
                {ans = ans + 'E'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'F')
                {ans = ans + 'F'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'O')
                {ans = ans + 'O'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'R')
                {ans = ans + 'R'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'C')
                {ans = ans + 'C'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'E')
                {ans = ans + 'E'; break;}

        for(; i <= sz; i++)
            if(s[i] == 'S')
                {ans = ans + 'S'; break;}

        if(ans == "CODEFORCES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
