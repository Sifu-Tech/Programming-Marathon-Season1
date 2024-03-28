#include <iostream>

using namespace std;

int main()
{
    //NESTED LOOPS Simply Mean putting a loop inside a loop

    //EXAMPLE 1: Lets count 1 to 10 3 times

   for (int i =1; i<=3; i++){

     for (int j=1; j<=10; j++){
        cout << j << " ";
    }

    cout << '\n';

   }
    return 0;
}
