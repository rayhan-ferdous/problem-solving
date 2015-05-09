#include <bits/stdc++.h>

using namespace std;

void toLower(char &ch)
{
    ch += 32;
}

int main()
{
    string a, b;

    while(cin >> a >> b)
    {
        int sza = a.size()-1, szb = b.size()-1;

        for(int i = 0; i <= sza; i++)
            if(65 <= a[i] and a[i] <= 90)
                toLower(a[i]);

        for(int i = 0; i <= szb; i++)
            if(65 <= b[i] and b[i] <= 90)
                toLower(b[i]);

        //cout << a << " " << b << endl;

        if(a < b)
            cout << -1 << endl;
        else if(a == b)
            cout << 0 << endl;
        else
            cout << 1 << endl;

    }

    return 0;
}
