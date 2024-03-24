#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter your name: " << '\n';
    cin >> name;
    cout << "Enter your age: " << '\n';
    cin >> age;
    cout << "Your name is " << name << endl;
    cout << "You are " << age << " years old" << '\n';

    //getting characters with spaces
    string fullName;
    cout << "What is your full name? " ;
    getline(cin >> ws, fullName);
    cout << "Your full Name is " << fullName << '\n' ;

    //getting more than one value at the same time and storing them in different variables
    string food1;
    string food2;
    cout << "Tell us your favorite dishes: ";
    cin >> food1 >> food2;
    cout << "You like: " << food1 << " and " << food2 << endl;

    return 0;
}
