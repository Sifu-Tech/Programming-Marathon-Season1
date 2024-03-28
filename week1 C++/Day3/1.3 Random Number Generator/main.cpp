#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));  //giving or random number generator a seed i.e it uses current time //generators numbers btn 0 to 32760

    int randomNumber = rand();

    cout << "\n\n ***********************RANDOM NUMBER GENERATOR***********************\n\n";

    cout << randomNumber;


    //Generating a random number between a specific range e.g between 0 and 10

    int randNumber = rand() % 10 + 1;

    cout << "\n" << randNumber;



    return 0;
}
