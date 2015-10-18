//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 14, Exercise 24, program description --
//read SAF codes and display associated salaries
//created/revised by <Rex Jepson> <10/16/2015>

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //create file object and define variables
    int codeRequest = 0;
    int salary      = 0;
    int code        = 0;
    int validSalary = 0;
    char validCode  ='n';
    ifstream inCode;
    inCode.open("Intermediate24.txt");

    if (inCode.is_open())
    {
        cout << "Enter salary code (0 to end): ";
        cin >> codeRequest;
        while (codeRequest != 0)//sentinel
        {
            //read SAF code, if a valid code is read,
            //it is IDed as validCode and it's salary is
            //saved as a validSalary
            while (!inCode.eof())
            {
                inCode >> code;
                inCode.ignore(1);
                inCode >> salary;
                inCode.ignore();
                if (codeRequest == code)
                {
                    validCode = 'y';
                    validSalary = salary;
                }//end if
            }//end while

            //if there was a validCode during the reading,
            //display the validSalary and reset to defaults
            //otherwise, display that the code was invalid
            if (validCode == 'y')
            {
                cout << "Salary: $" << validSalary
                     << endl<< endl;
                validSalary = 0;
                validCode  = 'n';
            }
            else
                cout << "Invalid code."
                     << endl << endl;
            //end if

            //reset the sequential access file pointer to top
            inCode.close();
            inCode.open("Intermediate24.txt");
            if (inCode.is_open())
            {
                cout << "Enter salary code (0 to end): ";
                cin >> codeRequest;
            }
            else
                cout<< "File could not be opened." << endl;
            //end if
        }//end while
        inCode.close();
    }
    else
        cout<< "File could not be opened." << endl;
    //end if


    cin.get();
    return 0;
}//end main function
