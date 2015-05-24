#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in", "r", stdin);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;

        vector<int> v;

        for(int j = 1; j <= n; j++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int neggs = 0;
        int wt = 0;

        for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
            if(neggs + 1 <= p and wt + *it <= q)
            {
                neggs++;
                wt = wt + *it;
            }
            else
                break;
        }

        cout << "Case " << i << ": " << neggs << endl;
    }

    return 0;
}
