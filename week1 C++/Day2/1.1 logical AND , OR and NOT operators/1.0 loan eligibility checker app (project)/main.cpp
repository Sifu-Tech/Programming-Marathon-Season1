#include <iostream>

using namespace std;

int main()
{
    // The AND( && ) ===> checks whether both the conditions are true i.e. both conditions should be true
    // The OR ( || ) ===> checks whether one or all the conditions are true i.e. returns true if any of the conditions is true
    // The NOT  ( ! ) ===> reverses the initial result i.e. makes a true to be false

    bool hasGoodCredit = true;
    bool hasGoodIncome =true;
    bool hasCriminalRecord = true;
    string answer1;
    string answer2;
    string answer3;

    cout << "                             SIFU INTERNATIONAL BANK (SIB)                        \n";
    cout << "\n\n ****************************LOAN ELIGIBILITY CHECKER  SYSTEM *************************************\n\n";

    cout << " FILL OUT THIS QUICK FORM (be as truthful as possible) \n\n";
    cout << "----------------------------------------------------------------- \n";

     cout << "What is your credit record, Good or Bad? >> ";
     cin >> answer1;
     if(answer1 == "Good"){
        hasGoodCredit = true;
     }
     else if(answer1 == "Bad"){
        hasGoodCredit = false;
     }

     cout << "What is your Income status, Good or Bad? >>  ";
     cin >> answer2;
      if(answer2 == "Good"){
        hasGoodIncome = true;
     }
     else if(answer2 == "Bad"){
        hasGoodIncome = false;
     }

     cout << "Do you have any sort of criminal record, Yes or No?  >> ";
     cin >> answer3;
     if(answer3 == "Yes"){
        hasCriminalRecord = true;
     }
     else if(answer3 == "No"){
        hasCriminalRecord = false;
     }
     cout << "\n\n Thank your for filling out the quick form, \n ->>>checking your loan eligibility....... \n\n\n";


    if(hasGoodCredit && !hasCriminalRecord){
        cout << "Your good credit record make you eligible for a loan, thanks for choosing our Bank. \n\n";
    }
    else if(hasGoodIncome && !hasCriminalRecord){
        cout << "Your good income make you eligible for a loan, thanks for choosing our Bank. \n\n";
    }
    else if((hasGoodCredit || hasGoodIncome) && !hasCriminalRecord) {
        cout << "You are eligible for our loan, thanks for choosing our Bank. \n\n";
    }
    else{
        cout << "You are NOT eligible for our loan, apologies. \n\n";

    }

    cout << "***********************************||-- THANK YOU FOR BANKING WITH US --||****************************** \n\n";

    return 0;
}
