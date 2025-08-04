//without user defined

#include <iostream>
using namespace std;

int binarysearch(int arr[], int target, int size){

    int min = 0;
    int max = size - 1;
    int mid;

    while(min <= max){

        mid = (min + max)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }

    }

    return -1;

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int result = binarysearch(arr, target, size);

    if(result != -1){
        cout << "Target found at index: " <<result <<endl;
    }
    else{
        cout << "Target not available!";
    }

    return 0;

}