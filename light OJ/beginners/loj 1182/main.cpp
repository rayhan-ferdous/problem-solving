#include <bits/stdc++.h>

using namespace std;

string fromDecimal2(long long n, long long b)
{
    string chars = "0123456789ABCDEFGHIJ";
    string result = "";

    if(n == 0)
        return "0";

    while(n > 0)
    {
        result = chars[n%b] + result;
        n /= b;
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        long long n;

        cin >> n;

        string binary = fromDecimal2(n, 2);

        int c = 0;

        for(string::iterator it = binary.begin(); it != binary.end(); it++)
            if(*it == '1')
                c++;

        if(c % 2 == 0)
            cout << "Case " << i << ": " << "even" << endl;
        else
            cout << "Case " << i << ": " << "odd" << endl;
    }

    return 0;
}
