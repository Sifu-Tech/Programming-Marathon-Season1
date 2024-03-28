#include <iostream>

using namespace std;

int main()
{
    //WHILE LOOPS =>> This runs a block of code repeatedly for as long as a given condition is true

    string name;

    while(name.empty()){
        cout << "Enter your name: ";
        getline(cin, name);
    }

    //Infinite loop
    while(1==1){
        cout << "STUCK!! \n\n";
    }


    return 0;
}
