int* addFractions(int* a, int* b)
{
    int denom = LCM( a[1], b[1] );
    int c[2] = { denom/a[1]*a[0] + denom/b[1]*b[0] , denom };

    return c;
}
