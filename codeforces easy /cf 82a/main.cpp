#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long name, n;

    while(cin >> n)
    {
        long long a = 1, p;
        long long s;

        for(p = 0; ; )
        {
            if(a <= n)
            {
                s = a;
                a = a+5*pow(2,p);
                p++;

            }
            else
                break;
        }

        p--;

        //cout << s << " " << p-1 << endl;

        long long e = 5*pow(2,p);
        long long block = e/5;
        n = n-s+1;

        //cout << block << endl;

        long long ans = ceil((float)n/(float)block);

        //cout << ans << endl;

        name = ans;


        if(name == 1)
            cout << "Sheldon" << endl;
        else if(name == 2)
            cout << "Leonard" << endl;
        else if(name == 3)
            cout << "Penny" << endl;
        else if(name == 4)
            cout << "Rajesh" << endl;
        else if(name == 5)
            cout << "Howard" << endl;
    }





    return 0;
}
