#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int kase = 1; kase <= T; kase++)
    {
        cout << "Case " << kase << ":" << endl;

        long long S = 0;

        int N;
        cin >> N;

        while(N--)
        {
            string word;

            cin >> word;

            if(word == "donate")
            {
                long long amount;
                cin >> amount;
                S = S + amount;
            }
            else if(word == "report")
            {
                cout << S << endl;
            }
        }
    }

    return 0;
}
