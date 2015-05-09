int dot(int* A, int* B, int* C)
{
    int AB[2], BC[2];

    AB[0] = B[0] - A[0];
    AB[1] = B[1] - A[1];

    BC[0] = C[0] - B[0];
    BC[1] = C[1] - B[1];

    int dot = AB[0]*BC[0] + AB[1]*BC[1];

    return dot;
}
