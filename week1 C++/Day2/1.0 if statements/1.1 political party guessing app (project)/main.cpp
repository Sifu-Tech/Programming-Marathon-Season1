#include <iostream>

using namespace std;

int main()
{
    string color;
    cout << " \n\n*****************TELL ME YOUR FAVORITE COLOR, I WILL GUESS YOUR POLITICAL PARTY***************** \n\n";

    cout << "Enter your favorite color: ";
    getline(cin,color);

    if(color == "Yellow"){
        cout << "---> NRM \n\n";
    }
    else if(color == "Red"){
        cout << "---> NUP \n\n";
    }
    else if(color == "Green"){
        cout << "---> DP \n\n";
    }
    else if(color == "Purple"){
        cout << "---> PPP \n\n";
    }
    else{
        cout << "I am defeated, seems you don't come from Uganda. welcome to Pearl of Africa! \n\n";
    }

    cout << "***************************WAS THAT RIGHT? HOPE YOU HAD SOME FUN****************************** \n\n";
    return 0;
}
