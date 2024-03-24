//C++ STANDARD LIBRARY Provides us with blocks of code or functions that we can use in our projects without having to re write all by ourselves

//we use the include directive to include any file from the c++ standard lib in our project
#include <iostream>

//we use the using directive to access the std namespace directly so we can have access to all the functions inside the iostream file
using namespace std;

//main() is the function that serves as an entry point to our c++ project.
/* when defining functions in c++, we ;
1. specify the data type that is returned by the function i.e. in this case the main () returns an integer i.e. 0 if it executes successfully or any other number in case it encounters errors
2. give your function a name
3. follow the name with parenthesis
4. the parenthesis can be empty i.e. no parameters or can contain one or more parameters.
5. follow the parenthesis with an opening and closing curry brackets , this may start on the same line or can be on the next line
*/
int main()
{
    //we use cout from the iostream together with the console assertion operator << to write something to the console
    cout << "Welcome to the Programming Marathon" << endl;  //every statement terminates with a semi colon, the endl is used to end the line and go to another line

    return 0;
}
