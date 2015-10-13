//Introduction to Programming with C++ (6th ed) <Diane Zak>
//chapter 4 exercise TryThis9 foreign exchange rates
//created/revised by <Rex Jepson> <9/13/2015>

#include <iostream>

using namespace std;

int main()
{
    //declare input variable and named constants
    double cupPrice = 0.0;
    double platePrice = 0.0;
    int cupsPurchased = 0;
    int platesPurchased = 0;
    const double TAX_RATE = 0.055;

    //declare processing and output variables
    double totalCupCost = 0.0;
    double totalPlateCost = 0.0;
    double subtotal = 0.0;
    double totalCost = 0.0;

    //enter purchase information
    cout << "Cup price: ";
    cin >> cupPrice;
    cout << "Plate price: ";
    cin >> platePrice;
    cout << "Cups Purchased: ";
    cin >> cupsPurchased;
    cout << "Plates Purchased: ";
    cin >> platesPurchased;

    //calculate purchase and total costs
    totalCupCost = cupsPurchased * cupPrice;
    totalPlateCost = platesPurchased * platePrice;
    subtotal = totalCupCost + totalPlateCost;
    totalCost = subtotal * (1 + TAX_RATE);

    //display total cost
    cout << "Total Cost: $" <<totalCost << endl;

    cin.get();
    return 0;
}   //end of main function
