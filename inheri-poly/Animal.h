#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string name;
    double weight;
public:
    Animal(string name, double weight);

    string getName()const;
    void setName(string name);
    double getWeight()const;
    void setWeight(double weight);
    // virtual string makeNoise() const; // by default the binding is static in c++ but for dynamic binding we need to say explicitly by virtual keyword
    virtual string makeNoise() const =0 ; // pure virtual function - means no need to define in base class but needed defination in derived class.
    // pure virtual function makes this Animal class as ABSTRACT class means object of abstract class type "Animal" is not allowed: -- function "Animal::makeNoise" is a pure virtual function

    // assignment - pure virtualfunction
    virtual string eat()const =0;
};




#endif