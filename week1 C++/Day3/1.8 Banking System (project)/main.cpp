#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double withdrawCash(double balance);
double depositCash();


int main()
{
    //SIFU INTERNATIONAL BANK CLIENT SELF SERVICE APP

    double balance =500000;
    double cacheBalance {};
    cacheBalance = balance;
    int choice =0;
    std::cin.clear();  // clears the cin input buffer in case the cin function fails to interpret the user's input
    fflush(stdin);  //clears and gets rid of the new line character that is store in our in put buffer after pressing enter

    cout << "\n\n********************* SIFU INTERNATIONAL BANK CLIENT SELF SERVICE APP ***************************\n\n";


    do{
            cout << "--------------------------------------- \n";
            cout << "Enter your choice from the options below; \n";
            cout << "--------------------------------------- \n";

            cout << "1. Show balance \n";
            cout << "2. Deposit Money \n";
            cout << "3. Withdraw Money \n";
            cout << "4. Exit \n";
            cout << "--------------------------------------- \n";

            cin >> choice;

            switch(choice){
                case 1: showBalance(balance);
                        break;

                case 2: //double cacheBalance = balance;
                        balance += depositCash();
                        if (balance > cacheBalance){
                            cout << "\n...Deposit successful.......\n\n";
                        }
                        else{
                            cout << "\n...Sorry, something went wrong!... \n\n";
                        }
                        showBalance(balance);
                        break;

                case 3: balance -= withdrawCash(balance);
                        showBalance(balance);
                        break;

                case 4: cout << "Thanks for banking with us..\n";
                        break;

                default: cout << "Invalid Choice..\n";

        }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    cout << "Your balance is Ugx " <<  setprecision(2) << fixed << balance << '\n';
}


double depositCash(){
    double amount =0;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    if(amount > 0) {
        return amount;
    }
    else{
        cout << "\n..Deposit Failed, That is not a valid deposit amount..\n\n";
        return 0;
    }
}


double withdrawCash(double balance){
    double amount = 0;
    cout << "\nEnter Amount to withdraw: ";
    cin >> amount;

    if(amount > balance){
        cout << "\nInsufficient balance !..\n" << endl;
        return 0;
    }
    else if(amount < 0){
        cout << "\nInvalid Amount, You can not withdraw a negative!.. \n\n";
        return 0;
    }
    else{
        return amount;
    }
}


