#include <bits/stdc++.h>

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
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    sieve(32800);

    string line;

    while(getline(cin, line))
    {
        stringstream ss;
        ss << line;

        long long p, e, x = 1;
        int exitStatus = 0;

        vector<long long> v;

        while(ss >> p)
        {
            ///v.push_back(p);

            if(ss >> e)
                ///v.push_back(e);
                x = x * pow(p, e);
            else
                exitStatus = 1;
        }

        if(exitStatus)
            break;

        ss.str("");

        v = primeFactors(x-1);

        long long sz = v.size()-1;

        long long counter[32810];

        for(long long i = 0; i < 32810; i++)
            counter[i] = 0;

        for(long long i = 0; i <= sz; i++)
        {
            counter[v[i]]++;
        }

        long long starting;
        for(long long i = 0; i < 32800; i++)
            if(counter[i] != 0)
            {
                starting = i;
                break;
            }

        ///cout << starting << ";;;"<< endl;

        for(int i = 32800-1; i > starting; i--)
            if(counter[i] != 0)
                cout << i << " " << counter[i] << " ";

        cout << starting << " " << counter[starting] << endl;



    }



















    return 0;
}
