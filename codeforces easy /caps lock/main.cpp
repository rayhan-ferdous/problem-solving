#include <bits/stdc++.h>

using namespace std;

void toCapital(char &ch)
{
    ch = (int)ch - (int)32;
}

void toSmall(char &ch)
{
    ch = (int)ch + (int)32;
}

int isCapital(char ch)
{
    if(65 <= ch and ch <= 90)
        return 1;

    return false;
}

int main()
{
    string word;

    while(cin >> word)
    {
        int sz = word.size()-1;
        int rep = 0;

        //check
        int allCapital = 1;

        for(int i = 1; i <= sz; i++)
        {
            if(isCapital(word[i]))
                allCapital = allCapital and 1;
            else
                allCapital = allCapital and 0;
        }

        if(allCapital)
            rep = 1;

        //correction


        if(rep)
            for(int i = 0; i <= sz; i++)
            {
                if(isCapital(word[i]))
                    toSmall(word[i]);
                else if(!isCapital(word[i]))
                    toCapital(word[i]);

            }

        cout << word << endl;

    }


    return 0;
}
