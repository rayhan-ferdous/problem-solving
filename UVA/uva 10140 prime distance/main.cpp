#include <bits/stdc++.h>

using namespace std;

long long int N = 0;
long long int  pr[47010];
long long int  compaq[47010];
long long int  lst[1000010];
long long int  L, U;
long long int  i, j;
long long int  a, b, Max, Min, c1, c2, d1, d2;
long long int  sqrtOfX;

//fn to check if x is prime
long long int  isPrime(long long int  x)
{
    if(x%2 == 0)
        return 0;
    else if(x < 47000)
        return pr[x];
    else
    {
        sqrtOfX= (long long int )sqrt(x);
        for( j = 0; compaq[j] <= sqrtOfX; j++)
            if(x%compaq[j] == 0)
                return 0;

        return 1;
    }
}

int main()
{
    freopen("in.txt", "r" , stdin);

    //prime generation part upto 1000000
    {
        //sieve's method
        pr[0] = pr[1] = 1;

        for( i = 3; i <= 47000; i++)
        {
            //if prime is found
            if(!pr[i])
            {
                compaq[N] = i;
                N++;

                for( j = i+i; j <= 47000; j = j+i)
                    pr[j] = 1;
            }
        }
    }

    while(scanf("%lld%lld", &L, &U) != EOF)
    {
        for( i = L; i <= U; i++)
        {
            if(i < 47000)
                {
                    if(i%2==0 && i != 2)
                        lst[i-L] = 0;
                    //cout << "i-L == " << i-L << endl;;
                    else
                        lst[i-L] = !pr[i];
                }
            else
                {
                    if(i%2==0)
                        lst[i-L] = 0;
                    //cout << "i-L == " << i-L << endl;
                    else
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
