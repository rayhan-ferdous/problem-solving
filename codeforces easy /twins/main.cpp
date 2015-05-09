#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;

    while(cin >> n)
    {
        vector<int> v;
        v.push_back(-1);

        float s = 0.0;

        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            v.push_back(a);
            s = s + (float)a;
        }

        s = s/2.0;

        sort(v.begin(), v.end());

        int t = 0;
        int k = n;
        int c = 0;

        while(t <= s and k >= 1)
        {
            t = t + v[k];
            k--;
            c++;
        }

        cout << c << endl;



    }

    return 0;
}
