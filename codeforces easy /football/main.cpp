#include <bits/stdc++.h>

using namespace std;

int main()
{
    string state;

    cin >> state;

    int sz = state.size()-1;

    int c0 = 0, c1 = 0;
    vector<int> v0, v1;

    for(int i = 0; i <= sz; i++)
    {
        if(state[i] == '0')
        {
            c0++;
            v1.push_back(c1);
            c1 = 0;

        }
        else
        {
            v0.push_back(c0);
            c0 = 0;
            c1++;

        }
    }

    if(c0 == 0)
        v1.push_back(c1);
    else if(c1 == 0)
        v0.push_back(c0);

    sort(v0.begin(), v0. end());
    sort(v1.begin(), v1.end());

    int v0sz = v0.size()-1;
    int v1sz = v1.size()-1;

    if(v0[v0sz] >= 7 or v1[v1sz] >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
