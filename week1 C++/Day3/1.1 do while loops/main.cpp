#include <iostream>

using namespace std;

int main()
{
    //Do While Loops =>> Execute a piece of code once then checking the condition and if the condition is true, it executes it again

    string userName;

    do{
        cout << "Enter your Name: ";
        getline (cin, userName);
    }while(userName.empty());

    //An application of a Do While Loop would be if maybe you are coding a game and you want a user to first play and then replay again
    //if they press replay at the end of the first game.




    return 0;
}
