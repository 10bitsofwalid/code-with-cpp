//user-defined
#include <iostream>
using namespace std;

void selectionsort(int arr[], int size){

    //outer loop to move the boundary of the unsorted array
    for(int i=0; i<size-1; i++){
        
        int minindex = i; //let the current index is the minimum

        //inner loop to find the minimum element in the unsorted part
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minindex]){
                minindex = j; //update minindex if a smaller element is found
            }
        }

        //sawp the found minimum element with the first element of the unsorted array
        if(minindex != i){
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
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

    cout << "Current Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    selectionsort(arr, size);

    cout << endl << "Sorted Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    return 0;

}