#include <iostream>
#include <string>

using namespace std;

int main(){

    // console output
    // std::cout<<"Welcome to C++ " << std::endl; // with out namespace
    cout<<"Welcome to C++ " << endl; // with namespace



   // datatypes
   int myInt;
   myInt = 23;

    double myDouble = 3.14159;

    cout<< "myInt:"<<myInt<<endl;
    cout<< "myDouble:"<< myDouble << endl;

    // character and string

    char myChar = 'a';
    string myString = "Some String";
    cout << myChar << endl;
    cout << myString << endl;

    cout << "Entered string is: "<< myString << endl;

    return 0;
}