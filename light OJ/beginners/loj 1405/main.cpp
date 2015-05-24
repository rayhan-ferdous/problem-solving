#include <bits/stdc++.h>

using namespace std;

/* formula for number of digits in number n at base b
    numDigits(n, b) = 1 + floor( log(n)/log(b) )
    so put n! in place of n
    and we know log(n!) = log(1.2.3.4...n) = log1 + log2 + log3 + ... + logn
    precalculate the summation in array s
*/

double s[1000010];

int main()
{
    s[1] = 0;
    for(int i = 2; i <= 1000000; i++)
    {
        s[i] = log(i) + s[i-1];
    }

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        long long n, b;
        cin >> n >> b;

        cout << "Case " << i << ": " << (long long)(1 + floor(s[n]/log(b))) << endl;


    }

    return 0;
}
