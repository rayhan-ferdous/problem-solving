#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    while(cin >> n >> k)
    {
        vector<int> v;
        v.push_back(-1);

        for(int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int t;

        t = v[k];
        int sz = v.size()-1;

        if(t == 0)
        {
            int c = 0;

            for(int i = 1; t <= v[i] and i <= sz; i++)
                if(v[i] > 0)
                    c++;
            cout << c << endl;

        }
        else
        {
            int c = 0;

            for(int i = 1; t <= v[i] and i <= sz; i++)
            {

                c++;
            }

            cout << c << endl;
        }

    }

    return 0;
}
