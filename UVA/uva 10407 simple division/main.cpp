    /// theory:
    ///
    /// here, let the given numbers are,  a, b, c, ... z
    /// by the problem if answer is m then, a%m == b%m == c%m == ... == z%m == remainder r
    ///
    /// we dont know r but from the relations we can derive
    /// a%m - b%m == 0  and b%m - c%m == 0 and ... so on
    /// so, (a-b)%m == 0, means if only 2 numbers are given then m can divide (a-b) and (a-b) can divide itself so m = (a-b)
    ///
    /// again if more numbers are given then, (a-b)%m == (b-c)%m == ... == 0
    /// so, this m is such a number that can divide all of (a-b) , (b-c) , ... so on
    /// clearly, m is gcd( (a-b), (b-c), ... )
    ///
    /// thus m is obtained

#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    return GCD(b, a%b);
}

int main()
{
    long long val;

    //freopen("in", "r", stdin);

    while(cin >> val and val != 0){

        vector<long long> v;

        v.push_back(val);

        while(cin >> val and val != 0){

            v.push_back(val);

        }

        long long ans = abs(v[0]-v[1]);

        long long sz = v.size()-1;

        for(long long i = 1; i < sz; i++){
            //cout << v[i] << endl << v[i+1] << endl;
            ans = GCD(ans, abs(v[i]-v[i+1]));

        }

        cout << ans << endl;

    }


    return 0;
}
