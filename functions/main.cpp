#include <iostream>
#include <string>
#include <cmath>

using namespace std;


void printSomething(); // function prototype
void printMyName();

// function return type and parameters.
void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int n);

// Parameter passing : PassbyValue and Pass by reference
void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

// scope
void someFunction(int aParam);

double myGlobalDouble = 3.14159;

// function overloading
int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);


// recussion
int factorial(int num);

int main(){
    cout << "****** Functions ******" << endl;

    printSomething();
	printMyName();


    int num1 = 120;
	int num2 = 580;

	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printNumber(addThese(num1, 50));

	cout << square(5) << endl;


    //Passing scheme

    int myNumber = 20;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

	cout << endl << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2 call, myNumber is " << myNumber << endl;
	
	int myInputNum;

	threeTimesN(100, myInputNum);
	cout << "After threeTimesN, myInputNum is " << myInputNum << endl;


    // scope
    int localToMain = 20;
	cout << "The local to main variable is " << localToMain << endl;
	cout << "global double (in main) is " << myGlobalDouble << endl;

	someFunction(25);
	someFunction(28);
	someFunction(32);


    // function overloading
    int resultNum = getResult(30, 20);
	string nameResult = getResult("John", "Baugh");
	int cubeResult = getResult(5);

	cout << "result num is " << resultNum << endl;
	cout << "name result is " << nameResult << endl;
	cout << "cube result is " << cubeResult << endl;


    // math function from cmath library
    int powResult = pow(2, 3);
	int sqrtResult = sqrt(25);
	int ceilResult = ceil(4.2);
	int floorResult = floor(4.2);
	int logResult = log2(512);


	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrtResult << endl;
	cout << "ceiling of 4.2 is " << ceilResult << endl;
	cout << "floor of 4.2 is " << floorResult << endl;
	cout << "log2 of 512 is " << logResult << endl;



    // recursion
    int fact = factorial(10);
    cout << "Fatorial of 10! is " << fact << endl;

    return 0;
}

void printSomething() // function defination
{
	cout << "Hey!  Look I'm here!" << endl;
}

void printMyName()
{
	cout << "Nitin Singh" << endl;
}

void printHello()
{
	cout << "Hello there" << endl;
}

void printNumber(int a)
{
	cout << "The number is " << a << endl;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{
	return num1 + num2;
}

int square(int n)
{
	return n * n;
}


// passing parameters
void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "Some num in valueChanged1 is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}

void threeTimesN(int input, int& output)
{
	output = input * 3;
}


// scope 
void someFunction(int aParam)
{
	int myLocalNum = 100;
	static int myStatic = 500;
	myStatic++;
	myLocalNum++;
	myGlobalDouble++;


	cout << "My local number is " << myLocalNum << endl;
	cout << "The parameter is " << aParam << endl;
	cout << "My global double (in someFunction) is " << myGlobalDouble << endl;
	cout << "My static variable: " << myStatic << endl;
}


// function overloading
int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int num)
{
	return num * num * num;
}

// factorial

int factorial(int num){

    if (num >1){
        return num * factorial(num-1);
    }

    return 1;
}