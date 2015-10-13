// Introduction to Programming with C++ (6th ed.) <Diane Zak>
//Advanced5-15.cpp - demonstrates the proper procedure for comparing real numbers
// connection to differential equations and finding the nth term of the sequence
// such that the error was less than a given amount
//Created/revised by <Rex Jepson> on <09/28/2015>

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//declare variables
	double num1       = 10.0;
	double num2       = 3.0;
	double quotient   = 0.0;
	double absDiff    = 0.0;

	//calculate quotient
	quotient = num1 / num2;
	absDiff = fabs(quotient - 3.33333);

	//compare for equality
	if (absDiff <= 0.00001)
		cout << "Yes, the quotient " << quotient << " is equal to 3.33333." << endl;
	else
		cout << "No, the quotient " << quotient << " is not equal to 3.33333." << endl;
	//end if

	cin.get();
	cin.ignore();
	return 0;
}	//end of main function
