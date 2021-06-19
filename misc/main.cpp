#include <iostream>
#include <memory>


using namespace std;




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

    return 0;
}