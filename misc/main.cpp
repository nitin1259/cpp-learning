#include <iostream>
#include <memory>

#include "Car.h"
#include "Rectangle.h"
#include "RectangleHelper.h"


using namespace std;


void printData(Rectangle& rect);

int main(){
    cout << "************ smart pointers, friend function, operator overloading ***********" << endl;

    const int ARR_SIZE = 5;

    unique_ptr<double> doublePtr(new double); // this is C++ 11 version for smart pointer
    unique_ptr<double> mydoublePtr = make_unique<double>(); // this is C++ 14 version for smart pointer

    auto myArray = make_unique<int[]>(ARR_SIZE);

    *doublePtr = 3.14159;
    *mydoublePtr = 45.1234;

    cout << " double Ptr: " << *doublePtr << endl;
    cout << " my double Ptr: " << *mydoublePtr << endl;

    unique_ptr<double> otherPtr = move(doublePtr); // this is how we re assing the unique pointer to other pointer
    cout << "other pointer is: "<<*otherPtr << endl;

    for (int i = 0; i < ARR_SIZE; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}


    // * car pointer

    unique_ptr<Car> carPtr = make_unique<Car>("grey", 4);

    cout << "Car color: " << carPtr->getColor() << endl;
    cout << "Car doors: " << carPtr->getNumDoors() << endl;

    cout << endl << endl;



    // * frined function  breaks encapsulation
    Rectangle rect(10, 25);

    cout << "Rectangle area : " << rect.area()<< endl;

    changeData(rect); // friendly function calling
    cout << "Rectangle area after friendly function calling: " << rect.area()<< endl; 


    RectangleHelper helper;
    helper.modifyRectangle(rect);

	cout << "after class friend, r1 area: " << rect.area() << endl;

	cout << "printing data using friend:" << endl;
	printData(rect);

    return 0;
}

void changeData(Rectangle& rect){

    rect.length =100;
    rect.width= 100;
}

void printData(Rectangle& rect)
{
	cout << "length: " << rect.length << endl;
	cout << "width: " << rect.width << endl;
}