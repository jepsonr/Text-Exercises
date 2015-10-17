//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter, Exercise, program description --
//created/revised by <Rex Jepson> <date>

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
    ifstream inCode;
    inCode.open("Intermediate24.txt");

    if (inCode.is_open())
    {
        cout << "Enter salary code (0 to end): ";
        cin >> codeRequest;
        while (codeRequest != 0)//sentinel
        {
            while (!inCode.eof())
            {
                inCode >> code;
                inCode.ignore(1);
                inCode >> salary;
                inCode.ignore();
                if (codeRequest == code)
                    cout << " Salary: $" << salary << endl;
            }
            inCode.close();
            inCode.open("Intermediate24.txt");
            if (inCode.is_open())
            {
                cout << "Enter salary code (0 to end): ";
                cin >> codeRequest;
            }
            else
                cout<< "File could not be opened." << endl;
        }
    }
    else
        cout<< "File could not be opened." << endl;
    //end if
    inCode.close();

    cin.get();
    return 0;
}//end main function
