int EulerPhi(int N)
{
    vi factors = primeFactors(N);
    vi::iterator new_end = unique(factors.begin(), factors.end()); // get unique

    int result = N;

    for (vi::iterator i = factors.begin(); i != new_end; i++)
        result = result - result / *i;

    return result;
}
