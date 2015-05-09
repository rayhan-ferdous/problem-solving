#include <iostream>

using namespace std;

int main()
{
    int T, a, b;

    cin >> T;
    int caseNum = 1;

    while(T--)
    {
        cin >> a >> b;
        cout << "Case " << caseNum++ <<": " << a+b << endl;

    }
    return 0;
}
