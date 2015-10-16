//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 14 Exercise 17/18 ModifyThis18
//created/revised by <Rex Jepson> <10-18-2015>

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    //declare variables

    // create and open an out file object
    ofstream outFile;
    outFile.open("ModifyThis18.txt");

    //check that file opened then populate base variable
    if (outFile.is_open())
    {
        for ( int base = 10; base < 26; base++ )
        outFile << base << '#'
                << pow(base, 2) << '#'
                << pow(base, 3)
                << endl;
        //end for
    }
    else
        cout << "File write error" << endl;
    //end if

    outFile.close();


    //declare variables
    int base = 0;
    int square = 0;
    int cube = 0;

    // create and open an in file object
    ifstream inFile;
    inFile.open("ModifyThis18.txt");

    //display
    if (inFile.is_open())
    {
        while (!inFile.eof());
        {
            inFile >> base;
            inFile.ignore(1);
            inFile >> square;
            inFile.ignore(1);
            inFile >> cube;

            //display base and exponents line by line
            cout << base << " "
                 << square << " "
                 << cube << endl;
        }//end while

    }
    else
        cout << "File read error" << endl;
    //end if

    inFile.close();


    cin.get();
    return 0;
}//end main function
