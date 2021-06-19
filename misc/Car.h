#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
private:
    string color;
    int numDoors;
public:
    Car(string color, int numDoors);
    string getColor()const;
    int getNumDoors()const;
};

Car::Car(string color, int numDoors)
{
    this->color=color;
    this->numDoors=numDoors;
}

 string Car::getColor()const{
     return color;
 }
 int Car::getNumDoors()const{
     return numDoors;
 }


#endif