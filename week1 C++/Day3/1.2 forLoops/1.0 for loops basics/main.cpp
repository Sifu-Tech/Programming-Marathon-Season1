#include <iostream>

using namespace std;

int main()
{
    //A For Loop executes a block of code until the specified condition becomes false

    //Syntax
    /*
        for(counter initialization; logical test (condition); counter decreament or increament){

            BLOCK OF CODE TO BE EXECUTED

        }
    */

    //EXAMPLE: Print 1-10 onto the screen
    cout << "==========COUNTING 1 -10=================== \n";
    for(int i=1; i <= 10; i++){
            cout << i << endl;
        }
    cout << "==========REVERSE COUNT==================== \n";
    //EXAMPLE 2: Counting backwards i.e from 10 -> 1
    for (int i=10; i>=1; i--){
        cout << i << endl;
    }
    cout << "============EVEN NUMBERS==================== \n";
    //EXAMPLE 3: Counting only even numbers between 0 and 10. Hint: we shall incrementing our index by 2

    for (int i = 0; i<=10; i+=2){
        cout << i << endl;
    }

    return 0;
}
