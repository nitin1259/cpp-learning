#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Person.h"
#include "Dog.h"
#include "AngryCatException.h"

using namespace std;

// Re thwroing exception
void processPositive(int num);
void doSomething(int num);

// custom exception
void feedKitty(int numTreats);

int main(){
    cout << "****** Exception Handling ******" << endl;

    vector<string> myVector(3);
    myVector.at(0) = "Nitn";
    myVector.at(1) = "Sachin";
    myVector.at(2) = "Vipin";

    for (auto name : myVector){
        cout << name << endl;
    }


    // exception
    // myVector.at(3) = "kapil";
    try
    {
        // exception
        myVector.at(3) = "kapil";
    }
    catch(const out_of_range& err)
    {
        cout << err.what() << '\n';
    }
    

    //Person and througing expception.

    try
	{
		Person person1("Bob");
		Person person2("Sally");
		Person person3("John");
		Person person4("William");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;
	}
	catch (const runtime_error & err)
	{
		cout << err.what() << endl;
	}


    // Dog and thorwing exception
    try
    {
        Dog rotviler("Rot Veelar");
        cout << rotviler.getBreed() << endl;
        Dog greatDane("Great Dane");
         cout << greatDane.getBreed() << endl;
        Dog poodleDog("Poodle");
         cout << poodleDog.getBreed() << endl;


    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }


    // Custom exception exaple

    cout << "This is example of custome exception" << endl;
    int treat;
    cout << "Please enter the number of treats for cat ?" << endl;
    cin >> treat;

    try
    {
        feedKitty(treat);
    }
    catch(const AngryCatException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    


    return 0;
}


void processPositive(int num)
{
	cout << "Welcome to the positive integer processor!" << endl;

	if (num > 100)
	{
		cout << "processPositive says the number is too big!" << endl;
		throw out_of_range("Number cannot be greater than 100!");
	}
	else if (num >= 0)
	{
		cout << "Good job!  You passed in a positive num to processPositive" << endl;
	}
	else
	{
		throw invalid_argument("Negative number passed in!");
	}
}

void doSomething(int num)
{
	try
	{
		processPositive(num);
		cout << "Yay! doSomething could process that num!" << endl;
	}
	catch (const invalid_argument & err)
	{
		cout << "doSomething says there is a problem!" << endl;
		throw;  //rethrow
	}
	catch (const out_of_range & err)
	{
		cout << "doSomething says the number is too big!" << endl;
		throw; //rethrow 
	}
}

void feedKitty(int numTreats){

    if (numTreats < 3){
        throw AngryCatException();
    }
    else if (numTreats < 6 ){
        cout << "Kitty is not happy with " << numTreats
		<< " treats, but satisfied." << endl;
    }

    cout << "Kitty is happy with " << numTreats
		<< " treats." << endl;
}