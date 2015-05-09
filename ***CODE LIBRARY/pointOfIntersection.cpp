void pointOfIntersection(double &x, double &y)
{
    double det = A1*B2 - A2*B1;

    if(det == 0)
        //lines are parallel
        else
        {
            x = (B2*C1 - B1*C2)/det;
            y = (A1*C2 - A2*C1)/det;
        }
}
