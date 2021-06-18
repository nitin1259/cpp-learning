#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.h"

using namespace std;

class Dog : public Animal
{
private:
    string breed;
public:
    Dog(string name, double weight, string breed);
    
    void digHole() const;
    string getBreed()const;
    string makeNoise()const;
    void chaseCat()const;

    string eat()const;
};



#endif