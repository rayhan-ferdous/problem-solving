#include <iostream>

using namespace std;

int main()
{
    long long int T, i = 1;
    cin >> T;

    while(T--)
    {
        long long int original, memory;
        cin >> original;
        memory = original;

        do
        {
            long long int New = 0;

            while(original != 0)
            {
                long long int d = original%10;
                New = New + d*d;
                original = original/10;
            }

            original = New;
        }while(original >= 10);

        if(original == 1)
            cout <<"Case #" << i++ << ": " << memory << " is a Happy number." << endl;
        else
            cout <<"Case #" << i++ << ": " << memory << " is an Unhappy number." << endl;


    }

    return 0;
}
