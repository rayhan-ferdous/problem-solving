
int partition( int a[], int m, int p )
{
    int v = a[m];
    int i = m, j = p;

    do
    {
        do
            i++;
        while(a[i] < v);

        do
            j--;
        while(a[j] > v);

        if(i < j)
        {
            swap(a[i], a[j]);
            
        }

    }while(i < j);

    a[m] = a[j];
    a[j] = v;

    return j;
}

void quicsort(int a[], int p, int q)
{
    if(p < q)
    {
        int j = partition(a, p, q+1);

        quicsort(a, p, j-1);
        quicsort(a, j+1, q);
    }
}

