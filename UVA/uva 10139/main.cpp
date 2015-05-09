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

    long long primes_size = primes.size()-1;

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

long long get_powers(long long n, long long p)
{
    long long res = 0;
    for (long long power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}

long long dcount[50010], ncount[50010];

int main()
{
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    sieve(60000);

    long long n, d;

    while(cin >> n >> d)
    {
        if(d == 1)

            cout << d << " divides " << n << "!" << endl;

        else if(d == 0)

            cout << d << " does not divide " << n << "!" << endl;

        else if(n >= d)

            cout << d << " divides " << n << "!" << endl;

        else if(n < d and isPrime(d))
        {

            cout << d << " does not divide " << n << "!" << endl;
        }


        else    ///n < d but d is composite
        {
            ///finding prime factors of d
            vector<long long> f = primeFactors(d);

            ///keeping unique factors in set
            set<long long> s;
            long long sz = f.size()-1;

            for(long long i = 0; i <= sz; i++)
            {
                s.insert(f[i]);
            }

            ///take 2 map for n! and d
            map<long long, long long> map_n, map_d;

            ///for each element in set s
            ///count their number in f and keep in map_d
            for(set<long long>::iterator i = s.begin(); i != s.end(); i++)
            {
                long long counter = 0;

                for(vector<long long>::iterator j = f.begin(); j != f.end(); j++)
                {
                    if(*i == *j)
                        counter++;
                }

                map_d[*i] = counter;
            }



            for(set<long long>::iterator it = s.begin(); it != s.end(); it++)
            {
                map_n[*it] = get_powers(n, *it);
            }

            ///for(map<long long, long long>::iterator it = map_n.begin(); it != map_n.end(); it++)
            ///    cout << it->first << "  " << it->second << endl;

            bool divisible = true;

            for(set<long long>::iterator it = s.begin(); it != s.end(); it++)
            {
                //cout << map_d.find(*it)->first << "  " << map_n.find(*it)->second << endl;
                if(map_d.find(*it)->second <= map_n.find(*it)->second)
                    divisible = divisible and true;
                else
                    divisible = divisible and false;
            }

            if(divisible)
                cout << d << " divides " << n << "!" << endl;
            else
                cout << d << " does not divide " << n << "!" << endl;


        }

    }





















    return 0;
}
