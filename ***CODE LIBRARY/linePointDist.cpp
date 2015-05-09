double linePointDist(int* A, int* B, int* C, bool isSegment)
{
    double dist = cross(A, B, C)/distance(A, B);

    if(isSegment)
    {
        int dot1 = dot(A, B, C);

        if(dot1 > 0)
            return distance(B, C);

        int dot2 = dot(B, A, C);

        if(dot2 > 0)
            return distance(A, C);
    }

    return abs(dist);
}
