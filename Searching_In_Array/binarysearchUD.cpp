//taking input of array from user

#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target){
    
    int minimum = 0;
    int maximum = size - 1;
    int middle;

    while (minimum <= maximum){

        middle = (minimum + maximum)/2;

        if(arr[middle] < target){
            minimum = middle + 1;
        }
        else if(arr[middle] == target){
            cout << "Target found at index: " << middle;
            return 0;
        }
        else{
            maximum = middle - 1;
        }
    }
    
    cout << "Target do not exist!";
    return 0;

}

int main(){

    int size;
    cout << "Enter the size for the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements for the array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Current array: ";
    for(int i=0; i<size; i++){
        cout << arr[i];
    }

    int target;
    cout << endl << "Enter the element to search: ";
    cin >> target;

    binary_search(arr, size, target);

}
