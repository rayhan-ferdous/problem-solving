#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

vector < pair<long long, long long> > DandI ;

int main()
{
    pair<long long, long long> p, q;
    p.first = 0;
    p.second = 0;

    for(long long i = 0; i < MAX; i++)
        DandI.push_back(p);

    DandI[0].first = DandI[0].second = 0;

    for(long long i = 1; i < MAX; i++)
        DandI[i].first = 0;

    for(long long i = 1; i < MAX; i++)
        DandI[i].second = i;

    //for(long long i = 0; i <= MAX; i++)
        //cout << DandI[i].first << "  " << DandI[i].second << endl;

    for(long long i = 1; i < MAX; i++)
        for(long long j = i; j < MAX; j++)
            if(j%i == 0)
                DandI[j].first++ ;

    //cout << "=====================================" << endl;

    //for(long long i = 0; i < MAX; i++)
    //    cout << DandI[i].first << "  " << DandI[i].second << endl;

    sort(DandI.begin(), DandI.end()) ;

    //cout << "=====================================" << endl;

    //for(long long i = 0; i < MAX; i++)
      //  cout << DandI[i].first << "  " << DandI[i].second << endl;

    //cout << "++++++++++++++++++" << endl;

    vector< pair<long long, long long> > :: iterator i, j;

    i = DandI.begin();

    while(i != DandI.end())
    {
        j = i;

        while((*i).first == (*(j+1)).first )
        {
            j++;
        }

        reverse(i, j+1);

        i = j + 1;
    }

    //for(long long i = 0; i < MAX; i++)
      //  cout << DandI[i].first << "  " << DandI[i].second << endl;

    long long t, n;
    cin >> t;

    for(long long kase = 1; kase <= t; kase++)
    {
        cin >> n;
        cout << "Case "<< kase << ": " << DandI[n].second << endl;

    }


    return 0;
}
