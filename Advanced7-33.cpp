//chapter 7, exercise 33 Fibonnacci sequence,
//created/revised by <Rex Jepson> <9/24/2015>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables
    int firNum  = 0;
    int secNum  = 1;
    int thrdNum = 0;

    // Enter the initial value
    cout << firNum << ", ";
    cout << secNum << ", ";

    //enter loop (while)
    while (secNum <= 34)
    {
        thrdNum = firNum + secNum;
        cout << thrdNum << ", ";
        firNum = secNum;
        secNum = thrdNum;

    }//end while
    cout << endl;
    cout << endl;

    // Enter the initial value
    firNum = 0;
    secNum = 1;
    cout << firNum << ", ";
    cout << secNum << ", ";

    //enter new loop (for)
    for (secNum; secNum <= 34; secNum = thrdNum)
    {
        thrdNum = firNum + secNum;
        cout << thrdNum << ", ";
        firNum = secNum;
    }//end for

    cin.get();
    cin.ignore();
    return 0;
}//end main function
