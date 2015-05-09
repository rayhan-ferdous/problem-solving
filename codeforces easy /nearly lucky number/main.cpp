#include <bits/stdc++.h>

using namespace std;

long long c;
string s;

int main()
{

    while(cin >> s)
    {
        long long sz = s.size()-1;

        for(long long i = 0; i <= sz; i++)
        {
            if(s[i] == '4' or s[i] == '7')
                c++;
        }


        if(c == 4 or c == 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
