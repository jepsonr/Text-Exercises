//Introduction to Programming with C++ <Diane Zak>
//chapter 8, exercise 18, savings calculator using for loop - balance at the end of years 1-5
//created/revised by <rex jepson> <09/27/2015>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //declare variables
    int principal   = 1000;
    double rate     = 0.03;
    double balance  = 0.0;
    //set pecicision to 2 decimal places
    cout << fixed << setprecision(2);

    //enter the loop
    for ( int years = 1; years < 6; years += 1 )
    {
        balance = principal * pow( 1 + rate, years );
        cout << "Year " << years << ":";
        cout << "   $" << balance << endl << endl;
    }//end for

    cin.get();
    return 0;
}//end main function
