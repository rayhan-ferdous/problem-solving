#include <bits/stdc++.h>

using namespace std;

long long int  pr[1000010];
long long int  lst[1000010];
long long int  L, U;
long long int  i, j;
long long int  a, b, Max, Min, c1, c2, d1, d2;

//fn to check if x is prime
int suspect(long long b, int t, long long u, long long n)
{
    long long prod=1;

    while(u)
    {
        if(u&1) prod=((prod*b)%n);
        b=((b*b)%n);
        u/=2;
    }

    if(prod == 1)
        return 1;

    for(int i = 1; i <= t; i++)
    {
        if(prod == n-1)
            return 1;
        prod = (prod * prod) % n;
    }

    return 0;
}

long long int  isPrime(unsigned int n)
{
    if(n <= 1000000)
        return pr[n];
    else
    {
        long long int k = n - 1;
        int t=0;

        while(!(k%2))
        {
            t++; k/=2;
        }

        if(n>2 && n%2==0) return 0;
        if(n>3 && n%3==0) return 0;
        if(n>5 && n%5==0) return 0;
        if(n>7 && n%7==0) return 0;
        if(suspect(61, t, k, n) && suspect(7, t, k, n) && suspect(2, t, k, n))
            return 1;

        return 0;
    }
}

int main()
{
    //freopen("in.txt", "r" , stdin);

    //prime generation part upto 1000000
    {
        //sieve's method
        pr[0] = pr[1] = 1;

        for( i = 2; i <= 1000000; i++)
        {
            //if prime is found
            if(!pr[i])
            {
                for( j = i+i; j <= 1000000; j = j+i)
                    pr[j] = 1;
            }
        }
    }

    while(scanf("%lld%lld", &L, &U) != EOF)
    {
        for( i = L; i <= U; i++)
        {
            if(i <= 1000000)
                {
                    lst[i-L] = !pr[i];
                }
            else
                {
                    lst[i-L] = isPrime(i);
                }
        }

        //if i is prime then, lst[i-L] == 1

        a = -1, b = -1;

        Min = INFINITY, Max = 0;

        for( i = 0; i <= U-L; i++)
        {
            if( lst[i] )
            {
                a = b;
                b = i+L;
            }

            if(a != -1 && b != -1)
            {
                //find max min
                if(b-a < Min)
                {
                    Min = b-a;
                    c1 = a;
                    c2 = b;
                }
                if(b-a > Max)
                {
                    Max = b-a;
                    d1 = a;
                    d2 = b;
                }

            }

                            //cout << i-L << endl;
        }

        if(a == -1 || b == -1)
            printf("There are no adjacent primes.\n");
        else
            //cout << c1 << "," << c2 << " are closest, " <<d1 << "," << d2 << " are most distant." << endl;
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n", c1,c2,d1,d2);



















    }



    return 0;
}
