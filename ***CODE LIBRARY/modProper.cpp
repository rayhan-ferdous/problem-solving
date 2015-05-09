long long mod(long long a, long long b)
{
    long long ret = a%b;

    if(ret < 0)
        return ret + abs(b);

    return ret;
}