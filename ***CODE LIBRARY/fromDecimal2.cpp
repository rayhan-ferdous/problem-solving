string fromDecimal2(int n, int b)
{
    string chars = "0123456789ABCDEFGHIJ";
    string result = "";

    while(n > 0)
    {
        result = chars[n%b] + result;
        n /= b;
    }

    return result;
}
