#include <bits/stdc++.h>
#define ll long long

#define db(x)   cout << " < " <<  x << " > " << endl;
#define all(x, last)    cout << "=======================" << endl;  for(int iii = 0; iii <= last; iii++)    cout << iii << ".  " << x[iii] << endl ;    cout << endl << "=======================" << endl;

using namespace std;

int N, K, M;
int pay[260];

unsigned char ch;
ll t, i , p ;
unsigned long long sum               ;

int main()
{

    freopen("in", "r", stdin);

    cin >> N;
    cin.ignore();

    while(N--)
    {

        for(i = 0; i < 260; i++)
            pay[i] = 0;



        cin >> K;
        cin.ignore();

        while(K--)
        {
            cin >> ch >> p;
            cin.ignore();

            pay[(int)ch] = p;

        }



        cin >> M;
        cin.ignore();


        sum = 0;
        string line;


        while(M--)
        {
            //sum = sum + pay[(int)ch];

			while ((ch = cin.get()) != '\n')
			{
                //db(ch);
				sum += pay[(int) ch];
			}



        }





        printf("%lu.%lu$\n", sum / 100, sum % 100);
        ///or
        ///printf("%.2lf$\n", sum/100.0);


    }


    return 0;
}
