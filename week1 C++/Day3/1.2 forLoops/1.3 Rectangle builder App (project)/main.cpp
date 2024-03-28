#include <iostream>

using namespace std;

int main()
{
    //Draw a rectangle to the screen using the number of rows, columns and symbol specified by the user

    int rows ;
    int columns ;
    string symbol;

    cout << "\n\n *************************RECTANGLE BUILDER*********************************\n\n";

    //Step 1 -> getting input from the user and storing it
    cout << "How many rows do you want? ";
    cin >> rows;

    cout << "How many columns do you want? ";
    cin >> columns;

    cout << "Which Symbol do you want? ";
    cin >> symbol;

    //Step 2: -> printing out the rectangle
    for(int i=1; i<=rows; i++){

        for(int j=1; j <= columns; j++){
            cout << symbol;
        }

        cout << '\n';
    }


    return 0;
}
