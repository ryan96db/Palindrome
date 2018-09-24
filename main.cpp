#include <iostream>

using namespace std;


int main()
{
    int play;
    cout << "Would you like for me to see if your word is a palindrome? Enter 1 for yes or another key for No: ";
    cin >> play;


    while (play == 1)

    {


    string word;

    cout << "Please enter a word: ";
    cin >> word;


    int length = word.length();
    int x = length -1;


    int i;
    char backwardstolowercase;

    string wordbackwards;
    string wordforwards;

    int a;
    char forwardstolowercase;

    for (a = 0; a<=x; a++)
    {

            forwardstolowercase = (tolower(word[a]));
            wordforwards = wordforwards + forwardstolowercase;


    }


    for (i = x; i>=0; i--)
    {
        backwardstolowercase = (tolower(word[i]));

        wordbackwards = wordbackwards + backwardstolowercase;


    }


    if (wordbackwards == wordforwards && length > 1)
    {
        cout << "This is a palindrome." << endl;
    }

    else
    {
        cout << "This is not a palindrome." << endl;
    }



    cout << "Enter another word? Enter 1 for yes or another key for No:" ;
    cin >> play;

    if (play != 1)

    {

        break;



    }









    }


    if (play!=1)
    {
        cout << "Goodbye!" << endl;

    }

    return 0;


}
