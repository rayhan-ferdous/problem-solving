#include <iostream>

using namespace std;

long int length, a[100010], x, $fixed;

int main()
{
    while( cin >> length )
    {
        $fixed = x = 0;

        for(long int i = 0; i < length; i++)
            cin >> a[i];

        for(long int i = 0; i < length; i++)
        {
            if(a[i] == i)
                $fixed++;

            else if(x == 0 && i == a[a[i]])
                x++;
        }

        if($fixed == length)
            cout << $fixed;
        else if(x > 0)
            cout << $fixed + 2;
        else
            cout << $fixed + 1;
    }

    return 0;
}
