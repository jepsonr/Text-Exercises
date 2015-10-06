//Introduction to Programming with C++ (6th ed) <Diane Zak>
//Chapter 12, Exercise Advanced25,
//created/revised by <Rex Jepson> <10/5/2015>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    //declare variables
    int sales[10][3] = {{2400, 3500, 2000 }, {1500, 7000, 1000}, {600, 450, 2100}, {790, 240, 500},
                        {1000, 1000, 1000}, {6300, 7000, 8000}, {13000, 450, 700}, {2700, 5500, 6000},
                        {4700, 4800, 4900}, {1200, 1300, 400}};
    int individualSales = 0; //accumulator
    int totalSales = 0.0; //accumulator
    double individualBonus = 0.0;
    double bonusRate = 0.0;
    double totalBonus = 0.0;
    //enter the initial value
    cout << "Enter bonus rate: ";
    cin >> bonusRate;
    //enter the loop
    for ( int employee = 0; employee < 10; employee++ )
        for ( int monthlySales = 0; monthlySales < 3; monthlySales ++ )
        totalSales += sales[employee][monthlySales];
        totalBonus = static_cast<double>(totalSales) * bonusRate;
    //enter function

    //display
    for ( int employee = 0; employee < 10; employee++ )
    {
        cout << "Salesperson " << employee + 1 << ":";
        for ( int month = 0; month < 3; month++ )
        {
            individualSales += sales[employee][month];
//            cout << sales[employee][month];
        }//end for
        cout << fixed << setprecision(2);
        individualBonus = static_cast<double>(individualSales) * bonusRate;
        cout << endl;
        cout << "       Total individual sales: " << individualSales << endl;
        cout << "       Individual bonus:       " << individualBonus;
        cout  << endl << endl;
        totalBonus += individualBonus;
    }//end for
    cout << "       Total bonuses paid:     " << totalBonus;
    cout << endl << endl;

    cin.get();
    return 0;
}//end main function
