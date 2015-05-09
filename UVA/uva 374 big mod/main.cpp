#include <bits/stdc++.h>

using namespace std;

long long ApowBmodT(long long a, long long b, long long T) {

	long long r=1;

	while(b){
		if(b%2) r=(r*a)%T;
		a=(a*a)%T;
		b/=2;
	}

	return (int)r;
}

int main()
{
    long long a, b, t;

    while(cin >> a >> b >> t){

        cout << ApowBmodT(a, b, t) << endl;

    }

    return 0;
}
