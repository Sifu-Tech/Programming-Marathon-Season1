#include <iostream>

using namespace std;

int main()
{
    //WHAT IS A VARIABLE? a variable is simply a space in memory used to store data for our code i.e. the value in the variable can be varied at any time hence being called variable
    /* to define a variable, you need to;
    1. specify the data type that the variable stores
    2. follow the data type with the name of the variable
    3. initialize the data type i.e. give it an initial value using the assignment operator = or the carry brackets {initial value}
    */

    string current_marathon = "Programming Marathon"; //data type: string , naming convention: snake casing i.e. words are separated using an underscore
    cout << "Welcome to the " << current_marathon  << endl;

    int duration = 10;  //data type: integer
    cout << "The " << current_marathon << "shall last for " << duration << " days " << endl;

    float ticket_price = 35.5f; // data type: float , naming convention: camelCasing i.e. the first letter of second word is capital
    cout << "The tickets to the " << current_marathon << " were sold at $" << ticket_price << " each" << endl;

    bool HasStarted = true; //data type: boolean , naming convention: Pascal
    cout << HasStarted << endl;

    cout << "=========================================================================================================" << endl;

    string upcomingMarathon = "The Ultimate Django Marathon";
    string startingDate = "April 25, 2024";
    short durationTime {15};  //another more efficient way of initializing variables i.e. using curry braces instead of an assignment operator
    double ticketPrice = 55.5;
    string ticketOutlet = "Sifu Tech & C.A Office";
    bool hasStarted = false;
    cout << "Up Next is the " << upcomingMarathon << ". Its going to last for " << durationTime << " days." << " starting on " << startingDate << endl;
    cout << "The tickets are being sold for only $" << ticketPrice << " at the " << ticketOutlet << " and the it has not yet started" << endl;

    return 0;

    //OTHER DATA TYPES:  long, long long , double  double

    //EXERCISE: Write a program that swaps the values of two variables i.e. x and y such that when x is printed, the value is the one contained in y instead and vice versa
    /*
        int x = 4;
        int y = 8;
        Qtn: write a program such that;
        cout << x                     prints out 8 i.e. the value of y
        cout << y                     prints out 4 i.e. the value of x
    */


}
