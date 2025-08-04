//user-defined
#include <iostream>
using namespace std;

void insertionsort(int arr[], int size){

    int i, j, key;

    //loop for the second element
    for(i=0; i<size; i++){
        key = arr[i]; //element to be inserted
        j = i-1;

        //shift elements one position right, which are greater then the key
        while(j >= 0 &&  arr[j] > key){
            arr[j+1] = arr[j]; //right shift
            j = j-1;
        }

        arr[j+1] = key; //place the key in the right position

    }

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

    cout << "Current Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    insertionsort(arr, size);

    cout << endl << "Sorted Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    return 0;

}