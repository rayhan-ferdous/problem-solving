#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;

    while(cin >> word && word != "#")
    {
        char letter = word[word.length()-1];
        int i = word.length() - 1;

        while(i-- && letter <= word[i]);

        if(i == -1)
            cout << "No Successor" << endl;
        else
        {
            string newWord = word.substr(0, word.length()-1);
            newWord.insert(i, word.substr(word.length()-1) , 1);
            cout << newWord << endl;
        }
    }


    return 0;
}
