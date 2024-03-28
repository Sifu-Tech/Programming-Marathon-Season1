#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //ROLLING A DICE

    //Rolling Once
    srand(time(NULL));
    int diceSide = rand() % 6 + 1;

    cout << "\n\n ***********************ROLLING A DICE*************************\n\n";
    //cout << diceSide << endl;

    //Rolling 3 times

    for (int i=1; i <= 3; i++){

       int diceSide = rand() % 6 + 1;
       cout << diceSide << endl;

    }

    return 0;
}
