//user-defined
#include <iostream>
using namespace std;

void mergesort(int arr[], int low, int high){

    int mid;

    if(low < high){
        mid = (low + high)/2;//find the mid value
        mergesort(arr, low, mid);//recursively sort the left half
        mergesort(arr, mid+1, high);//recursively sort the right half

        int i = low, j = mid + 1, k = 0;
        int arr2[high - low+1];//temporary array to hold merged values

        //compare elements from both halves and store in arr2 in sorted order
        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                arr2[k++] = arr[i++];
            }
            else{
                arr2[k++] = arr[j++];
            }

            //copy any remaining elements from the right half
            while(i <= mid){
                arr2[k++] = arr[i++];
            }

            //copy any remaining elements from the left half
            while(j <= high){
                arr2[k++] = arr[j++];
            }

            //copy the sorted values into the original array
            for(i=low, k=0; i<=high; i++, k++){
                arr[i] = arr2[k];
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

    cout << "Current Aarray: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    mergesort(arr, 0, size-1);
    cout << endl << "Sorted Array: ";
    for(int i=0; i<size; i++){
        cout << " " << arr[i];
    }

    return 0;

}