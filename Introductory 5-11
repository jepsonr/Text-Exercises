//Introduction to Programming with C++ (6th ed) <Diane Zak>
//chapter 5, exercise 11, Introductory5-11
//program description -- calculates the total price with or without a fee
//created/revised by <Rex Jepson> <9/15/2015>
#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	//declare variables and named literal constants
    int pounds = 0;
    double price = 0.0;
    char fee = ' ';
    double total = 0.0;

    //enter pounds of tea and price per pound
    cout << "Pounds: ";
    cin >> pounds;
    cout << "Price: ";
    cin >> price;
    cout << "Fee (Y/N): ";
    cin >> fee;

    //calculate total – pounds of tea times price per pound
    //a 'Y' or 'N' for including a $15 fee
    if (fee == 'Y')
        total = pounds * price + 15;
    else
        total = pounds * price;

    //display the total owed rounded to decimal places
    cout << fixed << setprecision(2);
    cout << "Total: $" << total << endl;

	cin.ignore();
	return(0);
}//end main function
