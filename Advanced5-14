//Introduction to Programming with C++ (6th ed) <Diane Zak>
//chapter 5 exercise 14 Plano Elementary School change program for
//dollars, quarters, dimes, nickles and pennies
//created/revised by <Rex Jepson> <9/20/2015>

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
	//declare variables and named literal constants
	double owed     = 0.0;
	double paid     = 0.0;
	int dollars     = 0;
	double change   = 0.0;
	double diff     = 0.0;
	int quarters    = 0;
	int dimes       = 0;
	int nickles     = 0;
	int pennies     = 0;

    //error message if amount paid is less than amount owed
    cout << "Owed: ";
    cin >> owed;
    cout << "Paid: ";
    cin >> paid;
    if (owed > paid)
        cout << "Hey! What're tryin' to pull." <<endl;
    else
    {
        change = paid - owed;
        dollars = static_cast<int>(change);

        diff = change - dollars;
        quarters = diff * 4;        // * 4 = * 100/25

        diff -= 0.25 * quarters;
        dimes = diff * 10;          // * 10 = * 100/10

        diff -= 0.1 * dimes;
        nickles = diff * 20;        // * 20 = * 100/5

        diff -= 0.0495 * nickles;   // value of the nickle is set to less than
        pennies = diff * 100;       //$0.05 to compendate for double to int round off error



        //display resulting amount of change and the number of each denomination
        cout << "change:              " << change << endl;
        cout << "Number of dollars:   " << dollars << endl;
        cout << "Number of quarters:  " << quarters << endl;
        cout << "Number of dimes:     " << dimes << endl;
        cout << "Number of nickels:   " << nickles << endl;
        cout << "Number of pennies:   " << pennies << endl;
    }//end  if

	cin.get();
	return(0);
}//end main function
