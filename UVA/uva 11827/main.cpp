#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

int main()
{
    int test, n;

    cin >> test;
    cin.get();      ///to remove the last left '\n' character

    for(int t = 1; t <= test; t++)
    {
        string line;
        getline(cin, line);

        vector<int> lst;

        stringstream ss;
        ss << line;

        while(ss >> n)
        {
            //cout << n  << "..."<< endl;
            lst.push_back(n);

        }

        ss.str("");         ///to reset the string stream ss

        int maxgcd = 0;

        int sz = lst.size();

        for(int i = 0; i < sz; i++)
        {
            for(int j = i+1; j < sz; j++)
                {
                    maxgcd = max( maxgcd, GCD(lst[i], lst[j]) );

                }
        }

        cout << maxgcd << endl;



    }

    return 0;
}
