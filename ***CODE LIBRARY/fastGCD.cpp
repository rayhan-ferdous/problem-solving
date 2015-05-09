int fastgcd(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    
    return a;
}