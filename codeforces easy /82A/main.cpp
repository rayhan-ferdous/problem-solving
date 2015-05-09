#include <iostream>
#include <vector>

using namespace std;

vector<long int> vSheldon;
long int n = 1, counter, V;

int main()
{
    V = 1 + 5*n*(n-1)/2 + (n-1);

    while( V <= 1000000000)
    {
        vSheldon.push_back(V);
        counter = n-1;
        long int last = V;

        while(counter--)
            vSheldon.push_back(++last);

        n++;
        V = 1 + 5*n*(n-1)/2 + (n-1);
    }

    for(long int i = 0; i < vSheldon.size(); i++)
        cout << vSheldon[i] << endl;



    return 0;
}
