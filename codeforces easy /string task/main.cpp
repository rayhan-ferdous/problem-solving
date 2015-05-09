#include <bits/stdc++.h>

using namespace std;

int main()
{
    string given;
    cin >> given;
    int sz = given.size()-1;
    string res = "";

    for(int i = 0; i <= sz; i++)
    {
        if( !(given[i] == 'A' || given[i] == 'E' || given[i] == 'I' || given[i] == 'O' || given[i] == 'U' || given[i] == 'Y' || given[i] == 'a' || given[i] == 'e' || given[i] == 'i' || given[i] == 'o' || given[i] == 'u' || given[i] == 'y') )
        {
            char low = given[i];

            if( 65 <= given[i] and given[i] <= 90)
                low += 32;

            stringstream ss;
            ss << '.' << low;
            string lastpart = ss.str();
            res += lastpart;
        }
    }

    cout << res << endl;

    return 0;
}
