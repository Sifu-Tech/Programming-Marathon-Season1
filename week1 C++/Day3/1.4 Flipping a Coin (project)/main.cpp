#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int coinSide = rand() % 2 + 1;

    switch(coinSide){
        case 1: cout << "Head";
                break;
        case 2: cout << "Tail";
                break;
    }


    return 0;
}
