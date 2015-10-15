//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 14 Exercise, Figure 14-11
//program description -- CD Collection
//created/revised by <Rex Jepson> <10/14/2015>

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//function prototypes
void saveCd ();
void displayCds ();


int main()
{
    //declare variables
    int menuOption = 0;

    //enter input
    do //begin looop
    {
        //display menu and get option
        cout << endl;
        cout << "1 Enter CD information" << endl;
        cout << "2 Display CD information" << endl;
        cout << "3 End the program" << endl;
        cout << "Enter menu option: ";
        cin >> menuOption;
        cin.ignore(100, '\n');
        cout << endl;

        //call function
        //or display error message
        if (menuOption == 1)
            saveCd();
        else
            if (menuOption == 2)
                displayCds();
        //end if

    }while (menuOption != 3);

    cin.get();
    return 0;
}//end main function

//**************function definitions***************
//function header
void saveCd()
{
    //writes records to a sequential access file
    string cdName       = "";
    string artistName   = "";

    //create file object and open the file
    ofstream outFile;
    outFile.open("cds.txt", ios::app);

    //determine whether the file was opened
    if (outFile.is_open())
    {
        //get the CD name
        cout << "CD name (-1 to stop): ";
        getline(cin, cdName);
        while (cdName != "-1")
        {
            //get the artist's name
            cout<< "Artist's name: ";
            getline(cin, artistName);
            //write the record
            outFile << cdName << '#' << artistName << endl;
            //get another CD name
            cout << "CD name (-1 to stop): ";
            getline(cin, cdName);

        }//end while
        //close the file
        outFile.close();

    }
    else
        cout << "File could not be opened." << endl;
    //end if

}//end of savedCd function


//function header
void displayCds()

{
    //displays the records stored in the cds.txt file
    string cdName       = "";
    string artistName   = "";

    //create file object and open the file
    ifstream inFile;
    inFile.open("cds.txt", ios::in);

    //determine whether the file wan opened
    if (inFile.is_open())
    {
        //read a record
        getline(inFile, cdName, '#');
        getline(inFile, artistName);

        while (!inFile.eof())
        {
            //display the record
            cout << cdName << ", " << artistName << endl;
            //read another record
            getline(inFile, cdName, '#');
            getline(inFile, artistName);
        }//end while
         //close the file
         inFile.close();
    }
    else
        cout << "File could net be opened." << endl;
    //end if
}//end of displayCds function

