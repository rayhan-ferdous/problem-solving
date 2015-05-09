#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;

    while(cin >> line)
    {
        vector<char> v;
        int sz = line.size()-1;

        for(int i = 0; i <= sz; i++)
        {
            if(line[i] == '1' or line[i] == '2' or line[i] == '3')
                v.push_back(line[i]);
        }



        sort(v.begin(), v.end());


        sz = v.size()-1;
        string res = "";

        for(int i = 0; i <= sz; i++)
        {
            //cout << v[i] << "::" << endl;
            res = res + v[i] + '+' ;
        }

        sz = res.size()-1;

        for(int i = 0; i < sz; i++)
        {
            cout << res[i];
        }

        cout << endl;
    }

    return 0;
}
