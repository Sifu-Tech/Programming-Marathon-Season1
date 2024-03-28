#include <iostream>

using namespace std;

int main()
{
    // Break -> breaks out of the loop if a given condition is true
    // Continue -> skips the current iteration


    //EXAMPLE 1: Counting from 1 to 10 but break if you reach 6
        cout << "******************STOPPING WHEN NUMBER IS 6************************\n";
    for(int i =1; i <= 10; i++){

        if(i==6){
            break;
        }

        cout << i << endl;
    }

    //EXAMPLE 2: Counting from 1 to 10 but simply omitting 6 i.e. we use continue
    cout << "****************************OMITTING 6*********************************\n";
     for(int i =1; i <= 10; i++){

        if(i==6){
            continue;
        }

        cout << i << endl;
    }


    return 0;
}
