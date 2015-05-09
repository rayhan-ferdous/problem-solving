#include <bits/stdc++.h>
#define is ==
using namespace std;

int main()
{
    string line;



    while(getline(cin, line))
    {
        int a = 0, b = 0, c = 0;

        for(int i = 0; i < line.length(); i++)
        {
            b = (  ('a' <= line[i] and line[i] <= 'z' ) or  ('A' <= line[i] and line[i] <= 'Z')  );

            if( (a is 0) and (b is 1) )
            {
                c++;
            }

            a = b;

        }

        cout << c << endl;

    }













    return 0;
}
