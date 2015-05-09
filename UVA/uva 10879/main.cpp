#include <iostream>

using namespace std;

int main()
{
    long long int T, i = 1;

    cin >> T;

    while(T--)
    {
        long long int K, List[4], next = 0;

        cin >> K;

        for(long long int d = 2; d < K && next != 4; d++)
        {
            if(K%d == 0)
            {
                List[next++] = d;
                List[next++] = K/d;
            }
        }

        cout << "Case #" << i++ << ": " << K << " = " << List[0] << " * " << List[1] << " = " << List[2] << " * " << List[3] << endl;
    }

    return 0;
}
