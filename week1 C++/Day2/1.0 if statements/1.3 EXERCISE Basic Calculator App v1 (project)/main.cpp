#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    string operatorSign;

    cout << "\n\n *****************************MATH CALCULATOR********************************* \n\n" ;

    cout << "Supported Operators are (+, -, *, /) \n\n";

    cout << "Enter the first name: ";
    cin >> firstNumber;
    cout << "Enter the second name: ";
    cin >> secondNumber;
    cout << "Enter the operator sign: ";
    cin >> operatorSign;
    cout << "---------------------------- \n";

    if(operatorSign == "+"){
        cout << "The answer is " << firstNumber + secondNumber << '\n' << '\n' ;
    }
    else if(operatorSign == "-"){
        cout << "The answer is " << firstNumber - secondNumber << endl << endl;
    }
    else if(operatorSign == "*"){
        cout << "The answer is " << firstNumber * secondNumber << endl << endl;
    }
    else if(operatorSign == "/"){
        cout << "The answer is " << firstNumber / secondNumber << endl << endl;
    }
    else{
        cout << "Invalid operator, the only supported operators are (+, -, *, /) only. \n\n";
    }

    cout << "********************************************************************************\n\n";

    return 0;
}
