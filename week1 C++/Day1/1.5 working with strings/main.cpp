#include <iostream>

using namespace std;

int main()
{
    //MORE ON TO STRINGS

    string ourCompany = "Sifu Technologies and Computer Academy";

    //length of the string i.e. number of characters in it
    cout << ourCompany.length() << endl;

    //Indexing i.e. accessing and modifying individual characters using indices
    cout << ourCompany[0] << endl;  // this prints out S
    cout << ourCompany[5] << endl;  // this prints out T

    ourCompany[0] = 'C' ;  //this replaces S with C in the string
    cout << ourCompany << endl;    // this prints out Cifu Technologies and Computer Academy

    //finding a character or characters in a string
    cout << ourCompany.find("Technologies", 0) << endl;  //<-- this prints the index at which the word Technologies starts. i.e. 5
    cout << ourCompany.find("Computer", 0) << endl; //<-- prints the index at which letter C is positioned in the string.


    //getting substrings i.e. section of the string
    cout << ourCompany.substr(5, 11) << endl; // you specify where to start from and how many chars to return



    return 0;
}
