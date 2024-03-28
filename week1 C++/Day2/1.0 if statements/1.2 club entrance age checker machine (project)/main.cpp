#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "\n\n**************************CLUB ENTRANCE AGE CHECKER MACHINE********************************* \n\n";

    cout << "What is your age? ";
    cin >> age;

    if(age >= 18){
        cout << "You can enter the club, Have fun! \n\n";
    }
    else{
        cout << "You are still a young kid, Go back home and do your homework \n\n";
    }

    cout << "*********************************************************************************************\n\n";
    return 0;
}
