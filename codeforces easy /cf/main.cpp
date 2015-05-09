#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long m , n, a;

    while(cin >> m >> n >> a)
    {
        cout << (unsigned long long)(ceil(m/(double)a)*ceil(n/(double)a)) << endl;
    }
    return 0;
}
