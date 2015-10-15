//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 14 Exercise, Lab 14-2 program description -- displays total sales amounts
//created/revised by <Rex Jepson> <10/14/2015>

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function prototypes
int getChoice();
void addRecords();
void displayTotal());

int main()
{
    //declare variables (input is in feet and RPM)
    int choice = 0;


    //enter input
    do
    {
        //gets user's menu and enters user's choice
        choice = getChoice();
        if (choice == 1)
            addRecords();
        else
            if (choice == 2)
                displayTotal();
            //end if
        //end if
    } while (choice != 3);
    //call function

    cin.ignore();
    return 0;
}//end main function

//**************function definitions***************
//function header
int getChoice()

{
   //displays menu and returns choice
    int menuChoice = 0;
    cout << endl << "Menu Options" << endl;
    cout << "1 Add Records" << endl;
    cout << "2 Display Total Sales" << endl;
    cout << "3 Exit program" << endl;
    cout << "Choice (1, 2, or 3)?";
    cin >> menuChoice;
    cin.ignore(100, '\n');
    cout << endl;
    return menuChoice;

}//end of getRhoice function


//function header

//{
    //function description

//}//end  function
//
