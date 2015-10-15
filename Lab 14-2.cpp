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
void displayTotal();

int main()
{
    int choice = 0;
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
    cout << "Choice (1, 2, or 3)? ";
    cin >> menuChoice;
    cin.ignore(100, '\n');
    cout << endl;
    return menuChoice;
}//end of getChoice function


//function header
void addRecords ()
{
    //saves records to a sequential access file
    string name = "";
    int sales = 0;
    ofstream outFile;

    //open file for append
    outFile.open("sales.txt", ios::app);

    //if the open was successful get the
    //salesperson's name and sales amount
    //and then write the information to the file
    //otherwise, display an error msg
    if (outFile.is_open())
    {
        cout << "Salesperson's name (X to stop): ";
        getline (cin, name);

        while (name != "X" && name != "x")
        {
            cout << "Sales: ";
            cin >> sales;
            cin. ignore(100, '\n');

            outFile << name << '#' << sales << endl;

            cout << "Salesperson's name " << "(X to stop): ";
            getline(cin, name);

        }//end while
        outFile.close();
    }
    else
        cout<< "File could not be opened." << endl;
    //end if

}//end of addRecords function


//function header
void displayTotal()

{
    //calculates and displays the total sales

    string name = "";
    int sales    = 0;
    int total = 0;
    ifstream inFile;

    //open file for input
    inFile.open("sales.txt");

    //if the open was successful, read the salesperson's name
    //and sales amount, then add the sales amount to the accumculator,
    //and then display the accumulator;
    //otherwise, display an error message
    if (inFile.is_open())
    {
       getline(inFile, name, '#');
       inFile >> sales;
       inFile.ignore();

       while (!inFile.eof())
       {
           total += sales;
           getline (inFile, name, '#');
           inFile >> sales;
           inFile.ignore();
       }//end while
       inFile.close();
       cout << "Total sales $" << total << endl << endl;

    }
    else
        cout << "File could not be opened." << endl;
    //end if

}//end of displayTotal function






























