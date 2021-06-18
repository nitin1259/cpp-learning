#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main(){
    cout << "********* Inheritance and polymorphism ************" << endl;

    // Animal;

    Animal* animal = new Animal("cat", 23.5);

    cout << "animal Name: " << animal->getName() << endl;
    cout << "animal Weight: " << animal->getWeight() << endl;
    cout << "animal Noise: " << animal->makeNoise() << endl;

    cout << endl;
    /**
     * 
     * Dog derived from Animal base class
     * 
     * */

    Dog* myDog = new Dog("jackie", 33.6, "German shephard");

    cout << "Dog name: " << myDog->getName() << endl;
    cout << "Dog breed: " << myDog->getBreed() << endl;
    cout << "Dog weight: " << myDog->getWeight() << endl;
    cout << "Dog noise: " << myDog->makeNoise() << endl;

    myDog->digHole();
    myDog->chaseCat();

    cout << endl;


    return 0;
}