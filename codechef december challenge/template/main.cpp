#include <bits/stdc++.h>

#define ll long long
#define sf scanf
#define pf printf
#define inf INFINITY
#define nl endl

#define For(i, a, b) for(ll i = a; i <= b; i++)
#define Loop(n) ll zzz = n; while(zzz--)

#define Testloop ll T; cin >> T; for(ll testcase = 1; testcase <= T; testcase++)

#define case_part "Case " << testcase << ": "

#define FILE freopen("in.txt", "r", stdin);

using namespace std;

//homemade getline() for auto flush
string line()
{
    string temp = "";
    char ch;

    while(sf( "%c", &ch) == 1 && ch != '\n' || temp == "" )
        temp = temp + ch;

    if(temp[0] == '\n')
        temp = temp.substr(1, temp.length());

    return temp;
}

int main()
{

    Testloop
    {



    }

    return 0;
}
