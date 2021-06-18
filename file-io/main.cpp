#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Rectangle.h"
#include "ItemFrequencies.h"

using namespace std;

void printFormatted(ofstream& outfile, int highNum);

// rectangle assignment
void populateVector(vector<Rectangle*>& recVector, ifstream& infile);
void printRectangles(vector<Rectangle*>& recVector, ofstream& outfile);
void deallocateRectanlges(vector<Rectangle*>& recVector);

int main()
{

    // output file stream 
	ofstream outfile;
	int highNum;

	cout << "Enter the high number" << endl;
	cin >> highNum;

	cout << "Writing to file" << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	printFormatted(outfile, highNum);

	outfile.close();

	cout << "Done!" << endl;



    /**
     * 
     * 
     * Input file stream
     * 
     * */

    cout << "Reading from file" << endl;
    ifstream infile;

    infile.open("input.txt");

    int num;
    int sumOfNum;
    vector<int> intVector;

    while(!infile.eof()){

        infile >> num;
        intVector.push_back(num);
        sumOfNum += num;
    }

    for (auto num : intVector){
        cout << num << endl;
    }
    cout << "Sum of the numbers: " << sumOfNum << endl;

    infile.close();



    /**
     * 
     * Names and ages 
     * 
     * */

    ifstream nameFile;
	ifstream ageFile;
	ofstream outFile;

	string tempName;
	int tempAge;

	cout << "opening files..." << endl;

	nameFile.open("names.txt");
	ageFile.open("ages.txt");
	outFile.open("output.txt");

	if (!nameFile || !ageFile)
	{
		cout << "Problem opening one of the files... bailing out" << endl;
		return 1;
	}

	while (!nameFile.eof() && !ageFile.eof())
	{
		getline(nameFile, tempName);
		ageFile >> tempAge;
		outFile << tempName << " " << tempAge << endl;
	}

	nameFile.close();
	ageFile.close();
	outFile.close();

	cout << "Done!" << endl;


    /**
     * 
     * 
     * 
     * Rectangles assignment
     * 
     * 
     * */

    ifstream inRectFile;
    ofstream outRecFile;

    vector<Rectangle*> rectVector;

    inRectFile.open("rectangle.txt");
    outRecFile.open("output.txt");

    if (!inRectFile){
        cout << "Error while opening the rectanle file" << endl;
        return 1;
    }

    populateVector(rectVector, inRectFile);
    printRectangles(rectVector, outRecFile);
    deallocateRectanlges(rectVector);


    inRectFile.close();
    outRecFile.close();


/**
 * 
 * 
 * // Shopping items frequency
 * 
 * 
 * */
    ItemFrequencies itemFrequencies;
	ifstream inshopfile;
	string itemName;

	inshopfile.open("shopping.txt");

	if (!inshopfile)
	{
		cout << "Error opening file... bailing out..." << endl;
		return 1;
	}

	while (!inshopfile.eof())
	{
		inshopfile >> itemName;
		itemFrequencies.addItem(itemName);
	}

	itemFrequencies.printFrequencies();

	inshopfile.close();

	return 0;
}

void printFormatted(ofstream& outfile, int highNum)
{
	for (int i = 1; i <= highNum; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}


// rectangle assignment

// rectangle assignment
void populateVector(vector<Rectangle*>& recVector, ifstream& infile){

    Rectangle* tempRec;
    int len;
    int width;
    while(!infile.eof()){
        infile >> len;
        infile >> width;

        tempRec = new Rectangle(len, width);

        recVector.push_back(tempRec);
    }


}
void printRectangles(vector<Rectangle*>& recVector, ofstream& outfile){

    for (Rectangle* temp : recVector){
        outfile << temp->area() << "\t" << temp->perimeter() << endl;
    }

}
void deallocateRectanlges(vector<Rectangle*>& recVector){
for (Rectangle* temp : recVector){
        delete temp;
        // temp = nullptr;
    }

    recVector.clear();
}