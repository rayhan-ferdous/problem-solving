int cross(int* A, int* B, int* C)
{
    int AB[2], AC[2];

    AB[0] = B[0] - A[0];
    AB[1] = B[1] - A[1];
    AC[0] = C[0] - A[0];
    AC[1] = C[1] - A[1];

    int cross = AB[0]*AC[1] - AB[1]*AC[0];

    return cross;
}
