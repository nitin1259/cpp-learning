#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    string breed;
public:
    Dog(string breed);
    ~Dog();

    string getBreed()const;
};

#endif