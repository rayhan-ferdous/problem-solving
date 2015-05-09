int fromDecimal(int n, int b)
{
    int result = 0;
    int multiplier = 1;

    while(n > 0)
    {
        result += n%b*multiplier;
        multiplier *= 10;
        n /= 10;
    }

    return result;
}
