#include <iostream>
#include <string>
#include "House.h"
#include "Rectangle.h"
#include "BankAccount.h"
#include "Pizza.h"

using namespace std;

void printHouse(const House& theHouse); // const infront of data type make sure it should not be changed after calling by reference

void printPizzaData(const Pizza& pizza);

int main(){
    cout << " Classes and Objects " << endl;

    House myHouse;

    myHouse.printHouseData();

    House ourHouse("green", 5);

    myHouse.setColor("white");
    myHouse.setStory(2);

    printHouse(myHouse);

    House yourHouse;

    yourHouse.setColor("brown");
    yourHouse.setStory(3);

    printHouse(yourHouse);

    yourHouse.printHouseData();

    ourHouse.printHouseData();

    // Rectangle

    cout << "Rectangle " << endl;

    Rectangle firstRec(30, 50);

    cout << "Rectangle area: " << firstRec.area() << endl;
    

    // Bank Account transactions;
    BankAccount myAccount("John Baugh", 5000);
	BankAccount bobsAccount("Bob Robinson");

	bobsAccount.deposit(500);
	cout << "Bob's account contains " << bobsAccount.getBalance() << endl;

	bobsAccount.withdraw(1000);  //should cause warning

	cout << "Bob's account is still " << bobsAccount.getBalance() << endl;

	cout << myAccount.getOwner() << "'s account contains "
		<< myAccount.getBalance() << endl;




    // Pizza transaction
    Pizza johnsPizza("Cheese pizza", 5, 8);
	Pizza mattsPizza("Pepperoni pizza", 7, 8);
	mattsPizza.addTopping("pepperoni");

	Pizza special("The Special Pizza", 12, 10);

	special.addTopping("pepperoni");
	special.addTopping("black olives");
	special.addTopping("onion");
	special.addTopping("mushroom");

	printPizzaData(johnsPizza);
	printPizzaData(mattsPizza);
	printPizzaData(special);

    return 0;
}

void printHouse(const House& theHouse){

   //  theHouse.setColor("pink") // wont be able to perform this as house is const and protected to modify

    cout << "The house is " << theHouse.getColor() << " and has "
		<< theHouse.getStory() << " stories." << endl;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name: " << pizza.getName() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Toppings:" << endl;

	pizza.printToppings();
	cout << endl;
}