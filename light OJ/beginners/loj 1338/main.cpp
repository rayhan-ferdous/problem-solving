#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in", "r", stdin);

    int T;
    cin >> T;
    cin.get();

    for(int kase = 1; kase <= T; kase++)
    {
        string name1, name2;

        getline(cin, name1);
        getline(cin, name2);

        vector<char> v1, v2;

        int sz = name1.size()-1;

        for(int i = 0; i <= sz; i++)
        {
            char letter = name1[i];

            if(letter != ' ')
            {
                if('A' <= name1[i] and name1[i] <= 'Z')
                    letter = letter - 'A' + 'a';

                v1.push_back(letter);
            }
        }

        sz = name2.size()-1;

        for(int i = 0; i <= sz; i++)
        {
            char letter = name2[i];

            if(letter != ' ')
            {
                if('A' <= name2[i] and name2[i] <= 'Z')
                    letter = letter - 'A' + 'a';

                v2.push_back(letter);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int rep = 1;

        int v1sz = v1.size()-1, v2sz = v2.size()-1;

        if(v1sz == v2sz)
        {
            for(int i = 0; i <= v1sz; i++)
                if(v1[i] != v2[i])
                {
                    rep = 0;
                    break;
                }
        }
        else
        {
            rep = 0;
        }

        cout << "Case " << kase << ": " ;

        if(rep)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;




    }

    return 0;
}
