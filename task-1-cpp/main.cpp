#include <iostream>
#include <string>

using namespace std;

int main(){

/*
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


     bool isRaining = true;

    cout << isRaining << endl; // this will print the integer values 0 for false and 1 for true.
    cout << boolalpha << isRaining <<endl; // this will print true/false

*/

    // airthmentic operators
    int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	int myInt = 5;

	result += 15;  //result = result + 15;

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;

	cout << myInt << endl;
	myInt++;  //++myInt;    myInt += 1;     myInt = myInt + 1;
	cout << myInt << endl;
	myInt--;  //--myInt;    myInt -= 1;     myInt = myInt - 1;
	cout << myInt << endl;


    /*
        Relational Operators
        >   greater than
        <   less than
        >=  greater than or equal to
        <=  less than or equal to
        ==  equal to
        !=  not equal to
    */

    // relational operators
    cout << boolalpha;

	int a1 = 15;
	int b1 = 20;
	bool areEqual = (a1 == b1);
	int age = 36;


	cout << (a1 < b1) << endl;
	cout << areEqual << endl;
	cout << (age >= 21) << endl;


    // constants
    const double MY_PI = 3.14159;
	const string MY_NAME = "John";
	
	cout << MY_NAME << endl;


    // keyboard input
    int age1;
	string fullName1;

	cout << "Please enter your name" << endl;
	getline(cin, fullName1);

	cout << "Please enter your age" << endl;
	cin >> age1;

	cout << fullName1 << endl;

	cout << age1 << endl;


    /*
    When we run this after integer value input.
    But the interesting part is it missed the name. So what's actually going on here?
    Why did it skip that?

The answer is that when you hit enter after entering a string, Getline consumes the new lane character.
In other words, it removes it from the input stream. You can think of the input stream as like an actual stream 
where the data's flowing and anything that's left in it has to be or will be handled in most cases at some point later on.
Since Getline consumes the new line character, these are OK in general. But right after we prompted for an integer, 
the stream extraction operator does not consume the new line character. So when the person hits enter here, 
enter is entered into the data stream and then it'll prompt the user.
But right immediately as it gets to the getline, it will see in the C then that there is a new line character.

So it'll say, oh, they must be done. So then it goes immediately to the next prompt.
So we have to be able to fix this in some way. So anytime you ask for a string, after you ask for an integer or any non string, you have to manually
consume this new line character. So to do that, we're going to solve the problem with something called cin.Get();

So what this does is it normally just gets a single character from the input stream and it will return that data.
But we're not interested in catching it. We just want to make sure that it consumes it.

    */

   cin.get();
    // user input assignment percentages

    string fullName;
    string location;
    int initialScore;

    cout << "Enter the full name:" << endl;
    getline(cin, fullName);

    cout << "Enter the city, state/provience" << endl;
    getline(cin, location);

    cout << "Enter the intitial score:" << endl;
    cin >> initialScore;

    cout << "Hello, " << fullName << endl;
	cout << "We heard you were from " << location << endl;
	cout << "Your initial score is " << initialScore << endl;
	cout << "But with five points added, your score is now " << (initialScore + 5) << endl;




    return 0;
}