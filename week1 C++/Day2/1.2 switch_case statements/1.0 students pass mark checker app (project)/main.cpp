#include <iostream>

using namespace std;

int main()
{
   int mark;

    cout << " \n\n *****************************STUDENT GRADING APP ************************** \n\n";

    cout << "Enter your marks: ";
    cin >> mark;

    switch(mark){
    case 50:
        cout << "You passed, Congrats  \n\n";
        break;
    default:
        cout << "Enter right marks \n\n";
    }
    cout << "*****************************GOOD LUCK IN YOUR STUDIES *********************** \n\n";
    return 0;
}
