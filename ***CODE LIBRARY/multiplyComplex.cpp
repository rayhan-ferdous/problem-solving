int* multiplyComplex(int* m, int* n)
{
    int prod[2] =
    {
      m[0]*n[0] - m[1]*n[1];
      m[0]*n[1] + m[1]*n[0];
    };

    return prod;
}
