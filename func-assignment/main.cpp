#include <iostream>
#include <string>
#include <array>

using namespace std;

int product(int n1, int n2, int n3);

int sumArray(int arr[], int len);

int sumArrObj(array<int,5>);
void sumArrObj(array<int,5> arr, int& sum);

int main(){
    cout<< "********* Function assignments ***********" << endl;

    int productVal = product(10, 20, 30);
    cout << "Product of 10, 20, 30: " << productVal << endl;

    // sum of inbuild array
    int input[]{10,20,30,40,50};
    cout << "Sum of the array : " << sumArray(input, 5) << endl;

    // sum of array object
    array<int, 5> arr{1,2,3,4,15};
    cout << "Sum of the array object: " << sumArrObj(arr) << endl;

    // sum of array object and pass by reference
    int sum;
    sumArrObj(arr, sum);
    cout << "Sum of the array object with pass by refernce: " << sum << endl;

    return 0;
}

int product(int n1, int n2, int n3){
    return 10*20*30;
}

int sumArray(int arr[], int len){
    int sum=0;
    for (int i=0; i<len; i++){
        sum +=arr[i];
    }

    return sum;
}

int sumArrObj(array<int,5> arr){
    int sum = 0;

    // for( int o: arr){
    //     sum += o;
    // }

    for (int i=0; i<arr.size(); i++){
        sum +=arr[i];
    }

    return sum;
}

void sumArrObj(array<int,5> arr, int& sum){

    for( int o: arr){
        sum += o;
    }

}