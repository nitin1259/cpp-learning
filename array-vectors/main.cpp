#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main(){
    cout << "Arrays and Vectors" << endl;

    const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE];
	string names[4]{ "Bob", "Sally", "John", "Ed" };

	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}

	// for (int i = 0; i < 4; i++)
	// {
	// 	cout << names[i] << endl;
	// }

    // enhanced for loop
	for (auto name : names)
	{
		cout << name << endl;
	}



    /**
     * 
     * Array class
     * 
     * */

    array<int, 5> myIntArray{};

	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << "Size of array: " << myIntArray.size() << endl;


    array<int, 10> twiceArray{};

    for (int i=0; i< 10; i++){

        twiceArray[i] = i*2;
    }

    for (auto i : twiceArray){
        cout<< i << endl;
    }


     /**
     * 
     * Vector class
     * 
     * */

    vector<int> someVec;
	vector <string> anotherVec(3);

	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);

	cout << "someVec size: " << someVec.size() << endl;

	anotherVec[0] = "John";
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	anotherVec.push_back("Shannon");

	for (int val : someVec)
	{
		cout << val << endl;
	}

	cout << endl;

	for (string name : anotherVec)
	{
		cout << name << endl;
	}

	cout << "Front and back:" << endl;
	cout << "front: " << anotherVec.front() << endl;
	cout << "back: " << anotherVec.back() << endl;

	anotherVec.pop_back();
	anotherVec.insert(anotherVec.begin(), "Don"); // if we want to insert 3 position the first argument should be- anotherVec.begin()+2

	cout << "now, front is " << anotherVec.front() << endl;
	cout << "now, back is " << anotherVec.back() << endl;

    // assignment

    vector<string> familyVec;

    familyVec.push_back("anil");
    familyVec.push_back("sachin");
    familyVec.push_back("vipin");
    familyVec.push_back("kapil");
    familyVec.push_back("kavita");

    cout << "Siz now-" <<familyVec.size() << endl;
    for (auto name: familyVec){
        cout<< name<< endl;
    }

    familyVec.insert(familyVec.begin()+2, "Jong");

    cout << "Siz now-" <<familyVec.size() << endl;
    for (auto name: familyVec){
        cout<< name<< endl;
    }

    familyVec.pop_back();

    cout << "Siz now-" <<familyVec.size() << endl;
    for (auto name: familyVec){
        cout<< name<< endl;
    }

    /**
     * 
     * 2D arrays
     * 
     * */
    int myNums[2][3]{
		{1, 2, 3},
		{4, 5, 6}
	};  //2D array that is 2 x 3

	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;

	cout << myNums[1][0] << endl;

	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int row = 1; row >= 0; row--)
	{
		for (int col = 2; col >= 0; col--)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

    /**
     * 
     * Assignments
     * 
     * */


    // arrays
    const int ARRAY_SIZE = 5;

	array<int, ARRAY_SIZE> myInts;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter an integer" << endl;
		cin >> myInts[i];
	}

	cout << "Now here are double the amounts:" << endl;

	for (int num : myInts)
	{
		cout << num * 2 << endl;
	}

    // verctors

    vector<int> myIntVector;
	int input;

	//priming read
	cout << "Enter a positive integer to add to the vector, or "
		<< "negative integer to quit!" << endl;
	cin >> input;

	while (input >= 0)
	{
		myIntVector.push_back(input);
		cout << "Enter a positive integer to add to the vector, or "
			<< "negative integer to quit!" << endl;
		cin >> input;
	}

	cout << "Now here are double the amounts:" << endl;

	for (int num : myIntVector)
	{
		cout << num * 2 << endl;
	}

    // Parallel Arrays and vector
    const int NUM_PEOPLE = 5;
	vector<string> names1;
	vector<int> weights;
	string tempName;
	int tempWeight;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a person's full name" << endl;
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight." << endl;
		cin >> tempWeight;
		cin.get();  //consume newline character

		names1.push_back(tempName);
		weights.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names1[i] << " weighs " << weights[i] << " lbs" << endl;
	}



    return 0;
}