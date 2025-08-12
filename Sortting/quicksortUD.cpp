//user-defiend
#include <iostream>
using namespace std;

//pivot placement
int partition(int arr[], int low, int high){

    int pivot = arr[low]; //first element as pivot
    int i = low + 1;
    int j = high;

    while(i <= j){

        //find the element greater then the pivot
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        //find the element samller then the pivot
        while(j >= low && arr[j] > pivot){
            j--;
        }

        //swap elements if needed
        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }

    //swap pivot with arr[j] to put it in the correct place
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;

}

//recursive quick sort array
void quicksort(int arr[], int low, int high){

    if(low < high){
        int pivotindex = partition(arr, low, high); //get pivot index
        quicksort(arr, low, pivotindex - 1); //sort the left half array
        quicksort(arr, pivotindex + 1, high); //sort the rigth half array
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

    quicksort(arr, 0, size - 1);

    cout << endl << "Sorted Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    return 0;

}