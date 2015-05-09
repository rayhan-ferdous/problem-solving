double distance(int* A, int* B)
{
    int d1 = A[0] - B[0];
    int d2 = A[1] - B[1];

    return sqrt(d1*d1 + d2*d2);
}
