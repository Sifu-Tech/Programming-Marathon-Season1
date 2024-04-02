#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << " \n \n ************************* TELL ME THE NUMBER, I TELL YOU THE MONTH *********************** \n\n";

    cout << "Instructions: Enter only numbers (1-12) \n\n";

    cout << "Enter a Number: ";
    cin >> number;

    switch(number){
    case 1:
        cout << "---> January \n\n";
        break;
    case 2:
        cout << "---> February \n\n";
        break;
    case 3:
        cout << "---> March \n\n";
        break;
    case 4:
        cout << "---> April \n\n";
        break;
    case 5:
        cout << "---> May \n\n";
        break;
    case 6:
        cout << "---> June \n\n";
        break;
    case 7:
        cout << "---> July \n\n";
        break;
    case 8:
        cout << "---> August \n\n";
        break;
    case 9:
        cout << "---> September \n\n";
        break;
    case 10:
        cout << "---> October \n\n";
        break;
    case 11:
        cout << "---> November \n\n";
        break;
    case 12:
        cout << "---> December \n\n";
        break;
    default:
        cout << "Please enter a number (1-12)  \n\n";

    }

    cout << "********************************************************************************************** \n\n";
    return 0;
}
