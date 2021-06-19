#include <iostream>
#include <string>
#include <deque>
#include <stack>
#include "Swapper.h"
#include <queue>
#include <map>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;


void printDeque(deque<int> deck);


// stack
void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string origString);

// algorithms

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);


template<class T>
T getGreater(T a, T b);

int main(){
    cout << "********* STL library *********" << endl;

    // * function template

    string name1 = "Nitin";
    string name2 = "Monika";

    int greaterInt = getGreater(10, 20);
    double greaterDouble = getGreater(5.14, 3.45);
    string greaterString = getGreater(name1, name2);

    cout << "Printer greate int : " << greaterInt << endl;
    cout << "Printer greate double : " << greaterDouble << endl;
    cout << "Printer greate string : " << greaterString << endl;

    cout <<endl <<endl;


    // * Swapper class template

    Swapper stringSwapper("Nitin", "Monika");
    Swapper intSwapper(10, 15);


    cout << "Testing the swapper!" << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl << endl;

	intSwapper.swap();
	stringSwapper.swap();

	cout << "After the swap..." << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl << endl;




    // * deque or deck
    deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(10);

	cout << "First print" << endl;
	printDeque(myDeck);

	myDeck.push_front(20);
	myDeck.push_front(30);
	cout << "Next print" << endl;
	printDeque(myDeck);




    // stack

    string strArray[5];

	strArray[0] = "racecar";
	strArray[1] = "fudge";
	strArray[2] = "civic";
	strArray[3] = "bob";
	strArray[4] = "dogs";

	for (string str : strArray)
	{
		printResult(str);
		cout << endl;
	}




    // * queue

    queue<string> names;

	//enqueue
	names.push("John");
	names.push("Sally");
	names.push("Bob");
	names.push("Sam");
	names.push("Ali");
	names.push("Karen");

	while (!names.empty())
	{
		cout << names.front() << endl;
		names.pop();  //dequeue
	}


    // * maps

    map<string, string> contacts;

	contacts["John Baugh"] = "313-555-5555";
	contacts["Bob Robinson"] = "734-555-5050";
	contacts["Sally Snorkle"] = "810-555-8888";

    for (pair<string, string> element: contacts){
        cout << element.first << " = " << element.second << endl;
    }
	for (auto element : contacts)
	{
		cout << element.first << " = " << element.second << endl;
	}


    // * algorithms

    vector<int> myVector;

	fillVector(myVector);
	printVector(myVector);

	countFives(myVector);

	cout << "Replacing 5s with 99s" << endl;
	replace(myVector.begin(), myVector.end(), 5, 99);

	countFives(myVector);
	printVector(myVector);


	cout << endl;
	cout << "sorted" << endl;
	sort(myVector.begin(), myVector.end());

	printVector(myVector);


    return 0;
}

template<class T>
T getGreater(T a, T b){
    if(a >b){
        return a;
    }
    return b;
}


// deque/deck
void printDeque(deque<int> deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}
	cout << endl;
}

// stack
void storeReverse(string origString, stack<char>& reverseStack)
{
	for (char c : origString)
	{
		reverseStack.push(c);
	}
}

bool isPalindrome(string origString)
{
	stack<char> reverseStack;
	storeReverse(origString, reverseStack);

	bool result = true;

	if (origString.length() == reverseStack.size())
	{
		for (char c : origString)
		{
			char currChar = reverseStack.top();
			if (currChar != c)
			{
				result = false;
				break;
			}
			reverseStack.pop();
		}
	}
	else
	{
		result = false;
	}

	return result;
}

void printResult(string origString)
{
	cout << "Is " << origString << " a palindrome?\t"
		<< boolalpha << isPalindrome(origString) << endl;
}


// algoriths

void fillVector(vector<int>& myVector)
{
	//seed
	srand(time(nullptr));
	int temp;

	for (int i = 0; i < 20; i++)
	{
		temp = rand() % 5 + 1;  //[1 - 5]
		myVector.push_back(temp);
	}
}

void printVector(const vector<int>& myVector)
{
	for (int element : myVector)
	{
		cout << element << endl;
	}
}

void countFives(const vector<int>& myVector)
{
	int numFives = count(myVector.begin(), myVector.end(), 5);
	cout << "number of fives: " << numFives << endl;
}