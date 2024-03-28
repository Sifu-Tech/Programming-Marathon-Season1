#include <iostream>

using namespace std;

//declaring and defining functions before the main()
void happyBirthday(string birthdayBoi){                 //void means this function doesn't return a value at the point of calling it.
    cout << "\n Happy Birthday to you...\n";
    cout << " Happy Birthday to you...\n";
    cout << " Happy Birthday to you...\n";
    cout << " Happy Birthday dear " << birthdayBoi << "...\n";
    cout << " Happy Birthday to you...\n";
}

void howOldAreYouNow();   //you have to declare your function before the main func if you have defined it after the int main ()
int getAge();
string getFullName(string firstName, string secondName);

int main()
{
    //A FUNCTION IS A BLOCK OF RE-USABLE CODE
    string birthdayBoiFirstName;
    string birthdayBoiSecondName;
    string fullName;
    int bdAge;

    cout << " What is your first name? ";
    cin >> birthdayBoiFirstName;

    cout << " What is your second name? ";
    cin >> birthdayBoiSecondName;

    fullName = getFullName(birthdayBoiFirstName, birthdayBoiSecondName);

    cout << "\n ********* A little birthday song for Mr." << fullName << " **********" << endl;
    happyBirthday(birthdayBoiFirstName);  //what you pass to the function is or called arguments but the function should have the receiving parameters
    howOldAreYouNow();
    bdAge=getAge();
    happyBirthday(birthdayBoiFirstName);
    if(bdAge != 0){
        cout << "\n You are " << bdAge << " years now...\n";
        cout << " You are " << bdAge << " years now...\n";
        cout << " You are " << bdAge << " years now...\n";
        cout << " You are " << bdAge << " years now...\n";
        cout << " You are " << bdAge << " years now...\n";
    }
    else{
        getAge();
    }
    happyBirthday(birthdayBoiFirstName);


    return 0;
}
//defining a function below or after the main() function

void howOldAreYouNow(){
    cout << "\n How old are you now?...\n";
    cout << " How old are you now?...\n";
    cout << " How old are you now?...\n";
    cout << " How old are you now?...\n";
    cout << " How old are you now?...\n";
}

int getAge(){
    int age;

    cout << " How old are you now?: ";
    cin>> age;

    return age;
}
string getFullName(string firstName, string secondName){
    return firstName + " " + secondName;
}

