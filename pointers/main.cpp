#include <iostream>
#include "Dog.h"

using namespace std;


// const correctness - cp == const pointer, cd == const data, n == no
void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

void noChange( const double* const mydouble );

int main(){

    cout << "*********** Pointers ***********" << endl;

    int myInt = 150;
    int * intPtr = &myInt;
    cout << "myInt number is " << myInt << endl;
    cout << "intPtr contains address of myInt is " << intPtr << endl;
    cout << "Pritn myInt value via pointer is " << *intPtr << endl;
    *intPtr = 200; // changing myInt value via pointer to int
    cout << "Changed myInt via intptr is " << myInt << endl;

    /**
     * 
     * dynamic memory allocation
     * 
     **/
    int * myIntPtr = new int();
    *myIntPtr = 123;
    // int * myIntPtr = new int(123);
    cout << *myIntPtr << endl;

    delete myIntPtr; // deleting the dynamic memory allocation from heap
    myIntPtr = nullptr; // setting the pointer to nullptr which points to 0 th memory in the heap 

    // another exapmple

    bool * myboolPtr = new bool(true);
    cout << boolalpha << *myboolPtr << endl;
    delete myboolPtr;
    myboolPtr = nullptr;


    // Dynamic memeory allocation for the objects

    Dog* myDogPtr = new Dog("Rover", "German Shepherd");
	Dog* yourDogPtr = new Dog("Fido", "Beagle");

	cout << "using arrow member access" << endl;
	cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
	cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

	cout << endl;

	cout << "using dereferencing and the dot operator" << endl;
	cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
	cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

	delete myDogPtr;
	delete yourDogPtr;

	myDogPtr = nullptr;
	yourDogPtr = nullptr;


    // Dynamic arrays

    //const int ARR_SIZE = 5;
	int arrSize = 0;
	
	cout << "Please enter an array size" << endl;
	cin >> arrSize;

	int* myArray = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;



    // const correctness
    noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;


    // assignment
    double* doublePtr = new double(23.45);

    noChange(doublePtr);

    delete doublePtr;

    return 0;
}




//neither is a constant (both can be changed)
void noConst()
{
	cout << "In noConst" << endl;

	int* intPtr = new int(50);

	cout << "\torig value : " << *intPtr << endl;

	*intPtr = 100;
	cout << "\tchange data: " << *intPtr << endl;

	delete intPtr;  //delete current dynamic int

	intPtr = new int(125);
	cout << "\tnew integer entirely: " << *intPtr << endl;
	
	delete intPtr;
}

//pointer is constant (cannot be changed)
//data is not constant (can be changed)
void cp2ncd()
{
	cout << "In cp2ncd" << endl;

	int* const intPtr = new int(100);
	cout << "\torig value: " << *intPtr << endl;

	*intPtr = 250;
	cout << "\tnew integer value: " << *intPtr << endl;

	
	delete intPtr;

	//intPtr = new int(222);  //ERROR!  ptr is constant
}


//pointer is not constant (can be changed)
//data is constant (can't be changed)
void ncp2cd()
{
	cout << "In ncp2cd" << endl;

	const int* intPtr = new int(500);

	cout << "\torig value: " << *intPtr << endl;

	delete intPtr;

	intPtr = new int(100);  //ok!  

	//*intPtr = 1500;     //ERROR - data is constant

	delete intPtr;
}

//pointer is constant
//data is constant
void cp2cd()
{
	const int* const intPtr = new int(5000);

	cout << "inside cp2cd" << endl;
	cout << "\torig value: " << *intPtr << endl;

	//no changes allow
	//*intPtr = 1212;   //ERROR - data is constant
	//intPtr = new int(1212);   //ERROR - pointer is constant

	delete intPtr;
}

void noChange(const double* const mydouble){

    cout << "double pointer parameter passed: " << *mydouble << endl;

}