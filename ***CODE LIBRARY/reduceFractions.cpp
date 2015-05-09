void reduceFraction(int* a)
{
    int b = GCD(a[0], a[1]);
    a[0] /= b;
    a[1] /= b;
}
