//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 4, Advanced15.cpp - displays gross pay, federal tax, state tax, and net pay
//Created/revised by <Rex Jepson> on <09/28/2015>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare constants and variables
	const double FED_RATE   = .2;
	const double STATE_RATE = .05;
	double inputGross       = 0.0;
	//assign the int data type to each of the following variables
	double gross      = 0;
	double federalTax = 0;
	double stateTax   = 0;
	double net        = 0;

	cout << "Gross pay: ";
	cin >> inputGross;

	//multiply inputGross by 100, assigning the result (as an integer) to gross
	gross = static_cast<int>(inputGross * 100);
	//multiply gross by FED_RATE, then add .5; assign the result (as an integer) to federalTax
	federalTax = static_cast<int>(gross * FED_RATE + 0.5);
	//multiply gross by STATE_RATE, then add .5; assign the result (as an integer) to stateTax
	stateTax = static_cast<int>(gross * STATE_RATE + 0.5);


	net = gross - federalTax - stateTax;

	//display the gross, federalTax, stateTax, and net
	//divide each value by 100.0 before displaying
	cout << fixed << setprecision(2) << endl;
	cout << "Gross:   " << gross / 100.0 << endl;
	cout << "Federal: -" << federalTax / 100.0 << endl;
	cout << "State:   -" << stateTax / 100.0 << endl;
	cout << "         -----" << endl;
	cout << "Net:     " << net / 100.0 << endl;

	cin.get();
	return 0;
}	//end of main function
