#include <iostream>



using namespace std;

int main()
{
    //if statements are used to do something basing on whether a certain condition is either true or false

    string marathon;
    double djangoTicket = 80;
    double repairTicket = 80;
    double wordpressTicket = 50;

    cout << "\n**********FIND OUT THE PRICE OF UPCOMING MARATHONS**********\n\n";
    cout << "UPCOMING MARATHONS: Django Marathon, Repair Marathon, WordPress Marathon \n\n";
    cout << "Which marathon are you interested in? ";
    //cin >> marathon;
    getline(cin,marathon);

    if(marathon == "Django Marathon"){
        cout << "The Django Marathon tickets are sold at $" << djangoTicket << endl << endl;
    }
    else if(marathon == "Repair Marathon"){
        cout << "The Repair Marathon tickets are sold at $" << repairTicket << endl << endl;
    }
    else if (marathon == "WordPress Marathon"){
        cout << "The WordPress tickets are sold at $" << wordpressTicket << endl << endl;
    }
    else{
        cout << "Sorry, there are currently only three upcoming marathons \n";
    }

    cout << "*******************THANK YOU********************************** \n";

    return 0;
}
