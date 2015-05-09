#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;

    while(cin >> name)
    {
        set<char> s;
        int sz = name.size()-1;

        for(int i = 0; i <= sz; i++)
        {
            s.insert(name[i]);


        }


        if(s.size()%2 == 0)
            cout << "CHAT WITH HER!" << endl;
        else
            cout << "IGNORE HIM!" << endl;

    }

    return 0;
}
