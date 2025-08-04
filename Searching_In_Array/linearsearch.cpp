//without user-defined
#include <iostream>
using namespace std;

int linearsearch(int arr[], int target, int size){

    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;

}

int main(){

    int arr[] = {3, 4, 5, 6, 2, 9, 7, 1, 8}; 
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout << "Enter a target: ";
    cin >> target;

    int result = linearsearch(arr, target, size);

    if(result != -1){
        cout << "Target found at index: " << result <<endl;
    }
    else{
        cout << "Target not available!";
    }

    return 0;

}