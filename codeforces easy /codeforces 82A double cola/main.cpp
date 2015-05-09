#include <iostream>
#include <vector>
using namespace std;

vector<int> a(1000000000);
string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
long int i, multiple, n ;

int main()
{
    i = multiple = 1;

    while(i <= 1000000000)
    {
        for(long int j = 1; j <= multiple; j++)
            a[i++] = 0;
        for(long int j = 1; j <= multiple; j++)
            a[i++] = 1;
        for(long int j = 1; j <= multiple; j++)
            a[i++] = 2;
        for(long int j = 1; j <= multiple; j++)
            a[i++] = 3;
        for(long int j = 1; j <= multiple; j++)
            a[i++] = 4;

        multiple++;
    }

    while(cin >> n)
    {
        cout << name[a[n]] << endl;



    }


    return 0;
}
