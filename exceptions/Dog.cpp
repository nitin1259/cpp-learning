#include <iostream>
#include "Dog.h"

Dog::Dog(string breed)
{
    if (breed != "Poodle") this->breed = breed;
    else throw runtime_error("Poodle! this is not a dog breed");
}

Dog::~Dog()
{
}

string Dog::getBreed()const{
    return this->breed;
}