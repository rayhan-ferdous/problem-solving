#include<bits/stdc++.h>

using namespace std;

long long _sieve_size;
bitset<10000010> bs;
vector<long long> primes;

void sieve(long long upperbound) ///create list of primes from 0 to upperbound
{
    _sieve_size = upperbound + 1;
    bs.reset();
    bs.flip(); /// set all numbers to 1

    bs.set(0, false);
    bs.set(1, false); ///0 and 1 are not prime

    for(long long i = 2; i <= _sieve_size; i++)
    {
        if(bs.test((size_t)i))
        {
            for(long long j = i*i; j <= _sieve_size; j += i)
            {
                bs.set((size_t)j, false);

            }

            primes.push_back((long long)i);
        }
    }
}

bool isPrime(long long N)
{
    if(N < _sieve_size)
        return bs.test(N);

    int primes_size = primes.size()-1;

    for(long long i = 0; i <= primes_size; i++)
        if (N % primes[i] == 0)
            return false;

    return true;

}

vector<long long> primeFactors(long long N)
{
    vector<long long> factors;
    long long PF_idx = 0, PF = primes[PF_idx];

    while(N != 1 and (PF * PF <= N))
    {
        while(N%PF == 0)
        {
            N /= PF;
            factors.push_back(PF);
        }

        PF = primes[++PF_idx];
    }

    if(N != 1)
        factors.push_back(N);

    return factors;
}


int main()
{
    ///freopen("in", "r", stdin);
    sieve(46500);

    long long g;

    while(cin >> g and g )
    {
        if(g == 1)
        {
            cout << "1 = 1" << endl;
            continue;
        }
        else if(g == -1)
        {
            cout << "-1 = -1" << endl;
            continue;
        }

        vector<long long> factors;

        if(g < 0)
        {
            g = -g;
            cout << "-" << g << " = -1 x ";
        }
        else
            cout << g << " = ";

        factors = primeFactors(g);

        long long sz = factors.size()-1;

        for(long long i = 0; i <= sz-1; i++)
        {
            cout << factors[i] << " x ";
        }

        cout << factors[sz] << endl;





    }




    return 0;
}
