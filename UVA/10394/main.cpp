#include <bits/stdc++.h>

using namespace std;

bool prime[20000010];
int lst[20000010];
int i, j, n, k = 0, root = sqrt(20000010);

int main()
{
    for(i=0;i<=20000000;i++)
        prime[i]=1;

    prime[0]=prime[1]=0;

    for(i=3;i<=root;i++)
        if(prime[i])
            for(j=i+i;j<=20000000;j+=i)
                prime[j]=0;




    for(i = 3; i <= 20000000; i = i+2)
    {
        if(prime[i] and prime[i+2])
            {
                lst[k++] = i;
            }

    }


    while(cin >> n)
    {
        n--;
        cout << "(" << lst[n] << ", " << lst[n]+2 << ")" << endl;

    }


    return 0;
}
