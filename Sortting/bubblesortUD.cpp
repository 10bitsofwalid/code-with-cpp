//user-defined
#include <iostream>
using namespace std;

int bubblesort(int arr[], int size){

    int temp;

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    cout << "Current array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    bubblesort(arr, size);

    cout << endl << "Sorted Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    return 0;

}