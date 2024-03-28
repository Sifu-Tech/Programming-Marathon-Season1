#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //CASINO PLAYING MACHINE

    //HOW IT WORKS: You choose amount to play and then choose a number between 1 and 100,
    //              if the number chosen is the exact number in the system, you win and the amount you played is multiplied by the number itself,
    //              if it's a wrong guess, YOU LOOSE!

    srand(time(NULL));
    int computerNumber = rand() % 5 + 1;
    double amountPlayed;
    int playedNumber;
    string signal;

    cout << "\n\n ******************************CASINO MACHINE, PLAY AND WIN!************************************************\n\n";

    do{
        cout << "\n\n Amount to Play: ";
        cin >> amountPlayed;

        cout << "Choose a Number between 1 and 5: ";
        cin >> playedNumber;

        if(playedNumber == computerNumber){

            cout << "YOU HAVE WON Ugx" << amountPlayed * playedNumber <<endl;
        }
        else{
            cout << "YOU LOOSE!" << endl;
        }

        if(signal.empty() || signal == "1"){
            do{
                cout << "-------------------------------------------------------\n";
                cout << "\n Select 1 to Continue Playing: \n Select 2 to Exit ";
                cin >> signal;
            }while(signal.empty());

            if(signal != "1" && signal != "2"){
                cout << "WARNING: You are not typing in the right response, doing that again shall force you to quit the game!\n";
                do{
                    cout << "---------------------------------------------------------------------------------------------------\n";
                    cout << "\n Select 1 to Continue Playing: \n Select 2 to Exit ";
                    cin >> signal;
                }while(signal.empty());

            }

        }


    } while(signal == "1");


     cout << "\n***************************************************PLAY BIG, EARN BIGGER****************************************\n\n";

    return 0;
}
