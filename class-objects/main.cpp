#include <iostream>
#include <string>
#include "House.h"
#include "Rectangle.h"

using namespace std;

void printHouse(const House& theHouse); // const infront of data type make sure it should not be changed after calling by reference

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
    

    return 0;
}

void printHouse(const House& theHouse){

   //  theHouse.setColor("pink") // wont be able to perform this as house is const and protected to modify

    cout << "The house is " << theHouse.getColor() << " and has "
		<< theHouse.getStory() << " stories." << endl;
}