//taking user-defined array
#include <iostream>
using namespace std;

int linersearch(int arr[], int target, int size){

    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;

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

    int target;
    cout << "Enter a target: ";
    cin >> target;

    int result = linersearch(arr, target, size);

    if(result != -1){
        cout << "Target found at index: " << result << endl;
    }
    else{
        cout << "Target not available";
    }

    return 0;

}