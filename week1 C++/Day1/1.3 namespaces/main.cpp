#include <iostream>

using namespace std; //<--- this gives us access to the names in the standard library. i.e. functions like cout, string, cin are defined within this namespace

/*
    Name spaces help in resolving name conflicts in large projects
    --> Entities can share the same name as long as they are in different name spaces.
*/

namespace first{
    int x = 3;
    int y = 99;
}

namespace second{
    int x = 5;
}

int main()
{
    int x = 8;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;

    //we can declare a namespace and access it's names without calling it

    using namespace first;
    cout << y << endl;


    return 0;
}
