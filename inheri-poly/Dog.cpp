#include <iostream>
#include "Dog.h"

 Dog::Dog(string name, double weight, string breed): Animal(name, weight){
     this->breed=breed;
 }
    
void Dog::digHole()const{
    cout << "Dog is digging hole" << endl;
}
string Dog::getBreed()const{
    return this->breed;
}

 string Dog::makeNoise()const{
     return "buuf! buuf!";
 }

 void Dog::chaseCat()const{

     cout << "hey! kitty kitty" << endl;
 }

 string Dog::eat()const{
     return "I am a pedegry lover!!!";
 }