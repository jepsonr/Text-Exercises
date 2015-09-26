# Text-Exercises
An Introduction to Programming with C++ (Diane Zak)
//Chapter 4, Exercise, Introductory11.cpp

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int beginStock = 0;
    int purchased = 0;
    int sold = 0;
    int endStock = 0;

    //enter beginning stock, number purchased and number sold
    cout << "Beginning dishwasher stock: ";
    cin >> beginStock;
    cout << "Dishwashers purchased: ";
    cin >> purchased;
    cout << "Dishwashers sold: ";
    cin >> sold;

    //calculate ending stock
    endStock = beginStock + purchased - sold;

    //display ending stock
    cout << "Ending dishwasher stock: " << endStock << endl;

    return 0;
}   //end of main formula
