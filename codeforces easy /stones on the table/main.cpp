#include <bits/stdc++.h>

using namespace std;

int main()
{


    int n;

    string word;


    while(cin >> n >> word)
    {
        int countSort[3] = {0, 0, 0};

        int sz = word.size()-1;

        char curr, prev;

        prev = word[0];
        int res = 0;

        for(int i = 1; i <= sz; i++)
        {
            curr = word[i];

            if(curr == prev)
                res++;

            prev = curr;
        }

        cout << res << endl;
    }

    return 0;
}
