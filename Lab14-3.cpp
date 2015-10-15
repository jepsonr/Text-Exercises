//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 14 Exercise, Lab 14-2 program description --
//adds and displays records, calculates average and total sales amounts
//created/revised by <Rex Jepson> <10/15/2015>

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function prototypes
int getChoice();
void addRecords();
void displayTotal();
void displayAvg();
void displayRecords();

int main()
{
    int choice = 0;
    do
    {
        //gets user's menu and enters user's choice
        choice = getChoice();
        if (choice == 1)
            addRecords();
        else if (choice == 2)
            displayTotal();
        else if (choice == 3)
            displayAvg();
        else
            if (choice == 4)
                displayRecords();
        //end if
    } while (choice != 5);
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
    cout << "3 Display Average Sales" << endl;
    cout << "4 Display Records" << endl;
    cout << "5 Exit program" << endl;
    cout << "Choice (1, 2, 3, 4, or 5)? ";
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

//function header
void displayAvg()

{
    //calculates and displays the total sales

    string name         = "";
    int sales           = 0;
    int total           = 0;
    int numberRecords   = 0;
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
           numberRecords ++;
           getline (inFile, name, '#');
           inFile >> sales;
           inFile.ignore();
       }//end while
       inFile.close();
       cout << "Average sales $" << total / numberRecords << endl << endl;

    }
    else
        cout << "File could not be opened." << endl;
    //end if

}//end of displayTotal function


//function header
void displayRecords()

{
    //create a file object and declare variables

    string name     = "";
    int sales       = 0;
    int total       = 0;
    ifstream inFile;

    //open file for input
    inFile.open("sales.txt", ios::in);

    //if the open was successful, read the salesperson's name
    //and sales amount, then display a list of records;
    //otherwise, display an error message
    if (inFile.is_open())
    {
       //read the records
       getline(inFile, name, '#');
       inFile >> sales;

       while (!inFile.eof())
       {
           //display a record
           cout << name << ", " << sales << endl;
           //get another record
           getline(inFile, name, '#');
           inFile >> sales;

       }//end while

       //close the file
       inFile.close();
    }
    else
        cout << "File could not be opened." << endl;
    //end if

}//end of displayRecords function




















