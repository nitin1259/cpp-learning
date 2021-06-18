#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main(){
    cout << "********* Inheritance and polymorphism ************" << endl;

/*
    // Animal;

    Animal* animal = new Animal("cat", 23.5); //object of abstract class type "Animal" is not allowed: -- function "Animal::makeNoise" is a pure virtual function

    cout << "animal Name: " << animal->getName() << endl;
    cout << "animal Weight: " << animal->getWeight() << endl;
    cout << "animal Noise: " << animal->makeNoise() << endl;

    delete animal;

    cout << endl;
 
    // * Dog derived from Animal base class


    Dog* myDog = new Dog("jackie", 33.6, "German shephard");

    cout << "Dog name: " << myDog->getName() << endl;
    cout << "Dog breed: " << myDog->getBreed() << endl;
    cout << "Dog weight: " << myDog->getWeight() << endl;
    cout << "Dog noise: " << myDog->makeNoise() << endl;

    myDog->digHole();
    myDog->chaseCat();


    delete myDog;

    cout << endl;
*/

    /**
     * 
     * 
     * Polymorphism
     * 
     * 
     * */

    Animal* polyDog = new Dog("Fido", 40.0, "Golden Retriver");

    cout << "Poly dog make noise ?: " << polyDog->makeNoise() << endl;
    cout << "Poly dog says : " << polyDog->eat() << endl;

    // delete polyDog;


    /**
     * 
     * 
     * enums 
     * 
     * */

    enum Direction { UP, DOWN, LEFT, RIGHT, STANDING };

	Direction myDirection = STANDING;
	cout << myDirection << endl;

	if (myDirection == UP)
	{
		cout << "up!" << endl;
	}
	else if (myDirection == DOWN)
	{
		cout << "down!" << endl;
	}
	else if (myDirection == LEFT)
	{
		cout << "left!" << endl;
	}
	else if (myDirection == RIGHT)
	{
		cout << "right!" << endl;
	}
	else if (myDirection == STANDING)
	{
		cout << "standing still!" << endl;
	}


    return 0;
}