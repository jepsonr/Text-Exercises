//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 13, Exercise Advanced 13-32 -- change word to pig-latin
//There are three possible cases:
//1st - starts w vowel (not incl "Y"/"y"), 2nd - no vowels, or 3rd - an embedded "Y"/"y"

//created/revised by <Rex Jepson> <10/11/2015>

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declare variables
    string word     = ""; //user input
    string pigWord  = "";//accumulator
    string letter = ""; //first letter deletion

    //enter the initial word or negative one to end
    cout << "Enter word (-1 to exit): ";
    getline(cin, word);
    while ( word != "-1" )
    {
        //first case: checks if first letter is a vowel
            //(not including "Y" or "y")
        if (word.substr(0, 1) != "A"
            && word.substr(0, 1) != "a"
            && word.substr(0, 1) != "E"
            && word.substr(0, 1) != "e"
            && word.substr(0, 1) != "I"
            && word.substr(0, 1) != "i"
            && word.substr(0, 1) != "O"
            && word.substr(0, 1) != "o"
            && word.substr(0, 1) != "U"
            && word.substr(0, 1) != "u"
            && word.substr(0, 1) != ""
            )
        {
            do //Cases two & three: removes first letter one at a time
                //then checks if the next letter is a vowel
                //(including "Y" and "y" this time)
            {
                letter = word.substr(0, 1);
                pigWord.insert(pigWord.length(), letter);
                word = word.erase(0, 1);

            }   while (word.substr(0, 1) != "A"
                    && word.substr(0, 1) != "a"
                    && word.substr(0, 1) != "E"
                    && word.substr(0, 1) != "e"
                    && word.substr(0, 1) != "I"
                    && word.substr(0, 1) != "i"
                    && word.substr(0, 1) != "O"
                    && word.substr(0, 1) != "o"
                    && word.substr(0, 1) != "U"
                    && word.substr(0, 1) != "u"
                    && word.substr(0, 1) != "Y"
                    && word.substr(0, 1) != "y"
                    && word.substr(0, 1) != ""
                     ); //end do while
            //sorts cases two and three
            if ( word.length() != 0  )
                cout << "Translation: " << word + "-" + pigWord + "ay"
                    << endl;
            else
                cout << "Translation: " << pigWord + "-way"
                    << endl;
            //end if
        }//end while
        else //result of first case
            cout << "Translation: " << word + "-way"
                    << endl;
        //reset accumulator
        pigWord = "";
        cout << "Enter word (-1 to exit): ";
        getline(cin, word);

    }//end while

    cin.get();
    return 0;
}//end main function

