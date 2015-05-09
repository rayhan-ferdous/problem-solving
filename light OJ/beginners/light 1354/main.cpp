#include <bits/stdc++.h>
#define is ==
#define dbg(AA, BB, CC, DD) cout << AA << " " << BB << " " << CC << " " << DD << " " << endl;
using namespace std;

int toDecimal(int n, int b)
{
   int result=0;
   int multiplier=1;

   while(n>0)
   {
      result+=n%10*multiplier;
      multiplier*=b;
      n/=10;
   }

   return result;
}

int main()
{
    int T;

    cin >> T;

    for(int t = 1; t <= T; t++)
    {
        int d1, d2, d3, d4;

        scanf("%d.%d.%d.%d", &d1, &d2, &d3, &d4);

        int b1, b2, b3, b4;

        scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);

        int c1, c2, c3, c4;

        c1 = toDecimal(b1, 2);
        c2 = toDecimal(b2, 2);
        c3 = toDecimal(b3, 2);
        c4 = toDecimal(b4, 2);

        if(d1 is c1 and d2 is c2 and d3 is c3 and d4 is c4)
            cout << "Case " << t << ": Yes" << endl;
        else
            cout << "Case " << t << ": No" << endl;



    }

    return 0;
}
