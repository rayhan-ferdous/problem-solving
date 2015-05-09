#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;

    while(cin >> word)
    {
        if(97 <= word[0] and word[0] <= 122)
        {
            word[0] = word[0] - 32;
        }

        cout << word << endl;

    }

    return 0;
}
