#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

    cout << " Welcome to control statements" << endl;
    cout << " -Sequential ->  sequence statements" << endl;
    cout << " -Selection -> descision statements" << endl;
    cout << " -Repetition -> loops" << endl;

    int age = 15;
	cout << age << endl;

	if (age >= 16) 
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You cannot drive yet!" << endl;
	}

	//for loop
	for (int i = 1; i <= age; i++)
	{
		cout << "Happy birthday " << i << endl;
	}


    // Selection controlled statements 1- if , 2- if else , 3 - switch

    // int age;
	
	cout << "Welcome to the Pub and Grille!" << endl;
	cout << "Please enter your age" << endl;
	cin >> age;

	if (age >= 21)
	{
		cout << "Here have a beer" << endl;
	}
	else if (age >= 16)
	{
		cout << "Here have a Coke!" << endl;
		cout << "And, at least you can drive!" << endl;
	}
	else
	{
		cout << "Here have a Coke!" << endl;
	}

	cout << "Thanks for coming to the Pub and Grille!" << endl;

    // switch statement

    char grade;

    cout << "Please enter the grade: " << endl;
    cin>>grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Great Job" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Good Job" << endl;
        break;
    case 'C':
    case 'c':
        cout << "You can do better" << endl;
        break;
    case 'D':
    case 'd':
        cout << "You are about to failing" << endl;
        break;
    case 'F':
    case 'f':
        cout << "Yor are failed. Need another attempt" << endl;
        break;
    default:
        cout << "Invalid grade entered, Please try again"<< endl;
    }
    


    // challenge 

    //prompt user for age AND gender
	//age is int, gender is character
	//get of f or F and are 60 or over
	//You qualify for the discount!
	//You do not qualify for the discount

	// int age;
	char gender;

	cout << "Please enter your age" << endl;
	cin >> age;

	cout << "Please enter your gender" << endl;
	cin >> gender;

	if ((gender == 'F' || gender == 'f') && age >= 60)
	{
		cout << "You qualify for the discount!" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount!" << endl;
	}


    // Repetition statement - while loops, do while, for loop

    int count = 0;

	while (count < 10) {
		
		cout << count << endl;
		count++;
	}

	cout << endl << endl;

	//do-while
	int count2 = 10;
	do
	{
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);

	// for loop
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	//priming read
	int input;
	cout << "Please enter a non-negative integer to continue, ";
	cout << "or negative if you want to quit" << endl;

	cin >> input;
	while (input >= 0)
	{
		cout << input << endl;
		cout << "Please enter a non-negative integer to continue, ";
		cout << "or negative if you want to quit" << endl;

		cin >> input;
	}//end while


    // assignment - sum of number entered  by used
    int sum = 0;
	int input;

	cout << "Enter a non-negative integer to sum, and negative integer to quit" << endl;
	cin >> input;
	while (input >= 0)
	{
		sum += input;
		cout << "Enter a non-negative integer to sum, and negative integer to quit" << endl;
		cin >> input;
	}

	cout << "Sum of the values: " << sum << endl;



    // Break and continue

    int countb = 0;
	while (countb < 10)
	{
		if (countb == 5)
		{
			break;
		}
		cout << countb << endl;
		count++;
		
	}

    // print only even
    int counte = 0;
	while (counte < 10)
	{
		if (counte % 2 != 0)
		{
			counte++;
			continue;
		}
		cout << counte << endl;
		counte++;
	}


    // random numbers generation.
    srand(time(nullptr));

	//int val1 = rand() % 10;  //val1 will be >= 0 and < 10

	////shift it
	//int val2 = rand() % 10 + 1;  //val2 is >=1 and <= 10

	//cout << val1 << endl;
	//cout << val2 << endl;

	int dieValue;

	for (int i = 0; i < 10; i++)
	{
		dieValue = rand() % 6 + 1;
		cout << dieValue << endl;
	}


    /**
     * 
     * 
     * Assignments 
     * 
     * */

    // Jam of the month club

    char packInput;
    int totalJam;
    int totalPrice=0;

    cout << "Package A:"<<endl;
    cout << "$8/month, includes 2 gem/month, additional jam $5 each"<<endl;
    cout << "Package B:"<<endl;
    cout << "$12/month, includes 4 gem/month, additional jam $4 each"<<endl;
    cout << "Package C:"<<endl;
    cout << "$15/month, includes 6 gem/month, additional jam 3$ each"<<endl;

    cout << "Please enter your subscribed package ?" <<endl;
    cin >> packInput;
    cout << "Please enter total jam consumed?" <<endl;
    cin >> totalJam;

    switch (packInput)
    {
    case 'A':
        if(totalJam>2){
            totalPrice = 8+ ((totalJam-2) *5);
        }else{
            totalPrice = 8;
        }
        break;
    case 'B':
        if(totalJam>4){
            totalPrice = 12 + ((totalJam-4) *4);
        }else{
            totalPrice = 12;
        }
        break;
    case 'C':
        if(totalJam>6){
            totalPrice = 15+ ((totalJam-6) *3);
        }else{
            totalPrice = 15;
        }
        break;
    default:
        cout << "Invalid input for opt package, try again" << endl;
    }

    cout << "Total Price: " << totalPrice << endl;

    return 0;
}