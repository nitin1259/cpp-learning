#include <iostream>
#include "House.h"

House::House(){
    this->color = "black";
    this->story = 1;
}

House::House(string color, int story){
    this->color = color;
    this->story = story;
}

House::~House(){
    cout << "The " << color << " house with " << story << " stories "
		<< " is being destroyed!" << endl;
}

void House::setColor(string color){
    this->color = color;
}
void House::setStory(int story){
    this->story = story;
}
string House::getColor() const{
    return this->color;
}
int House::getStory() const{
    return this->story;
}

void House::printHouseData() const{
    cout << "The house is " << this->getColor() << " and has "
		<< this->getStory() << " stories." << endl; 
}