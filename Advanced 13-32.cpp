//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 13, Exercise Advanced 13-32 -- change word to pig-latin
//created/revised by <Rex Jepson> <10/11/2015>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //declare variables
    string word     = "";
    string pigWord  = "";
    //enter the initial word
    cout << "Enter word (-1 to exit): ";
    getline(cin, word);
    while ( word != "-1" )
    {
        //enter the loop to remove first letter and
        //concatenate it to pigWord
        while (word.substr(0, 1) != "A"
            && word.substr(0, 1) != "a"
            && word.substr(0, 1) != "E"
            && word.substr(0, 1) != "e"
            && word.substr(0, 1) != "I"
            && word.substr(0, 1) != "i"
            && word.substr(0, 1) != "O"
            && word.substr(0, 1) != "o"
            && word.substr(0, 1) != "U"
            && word.substr(0, 1) != "u"
            && word.substr(0, 1) != "")
        {
            if ( word.substr(0, 1) != "Y" || word.substr(0, 1) != "y" )
            {
                pigWord.insert(pigWord.length(), word.substr(0, 1));
                word = word.erase(0, 1);
            }//end if
        }//end while

        if (pigWord.length() == 0)
            cout << "Translation: " << word + "-way"
                << endl;
        else if ( word.length() != 0  )
            cout << "Translation: " << word + "-" + pigWord + "ay"
                << endl;
        else
            cout << "Translation: " << pigWord + "-way"
                << endl;
        pigWord = "";
        cout << "Enter word (-1 to exit): ";
        getline(cin, word);
    }//end while

    cin.get();
    return 0;
}//end main function
