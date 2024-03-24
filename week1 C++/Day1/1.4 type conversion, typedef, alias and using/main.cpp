#include <iostream>

using namespace std;

int main()
{
    int number = 25.5567;
    cout << number << '\n'; //printing this out gives 25 and trancates or eliminates the .5

    //convert an int into a double
    cout << (double) number << '\n'; // this prints 25.5

    //convert an int into a char
    int testNumber = 100;
    cout << testNumber << '\n'; // this prints out 100
    cout << (char) testNumber << '\n'; // this prints out d i.e. the character equivalent of 100

    //converting double to int
    double temperature = 37.5;
    cout << (int) temperature<< '\n';

    //AN APPLICATION OF TYPE CONVERSION.
    // ||
    // ||
    // \/
    //let's say you want to write a program that calculates the percentage equivalent of a students test marks
    int questionPassed = 8;
    int totalQuestions = 10;
    cout << (questionPassed/totalQuestions)*100 << endl;   // well this gives us a 0 because the division gives 0.8 and .8 is dropped before multiplying by 100
    cout << "Your mark is " << (questionPassed/(double)totalQuestions)*100 << "%" << endl;



    //typedef, alias and using
    //typedef and using help you to give a data type a nickname or a simpler name to avoid typos and improve code readability

    typedef string text_t;
    text_t company = "Sifu Technologies and Computer Academy";
    cout << company << endl;

    using number_t = int;
    number_t age {24};
    cout << age << endl;



    return 0;
}
