//user-defined
#include <iostream>
#include <algorithm> //for sorting
using namespace std;

//structure to store value and weight
struct Item{

    int value;
    int weight;

};

//comparison sort of items by value to weight ratio (desc)
bool compare(Item a, Item b){

    //calculate value/weight ratio for both items
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;

    //return true if a greater then b (to sort in des)
    return r1 > r2;

}

double partialknapsack(int capacity, Item items[], int n){

    //sort items by value/weight ratio
    sort(items, items+n, compare);

    double total = 0.0; //total value in the knapsack

    for(int i=0; i<n; i++){
        if(capacity >= items[i].weight){
            capacity -=items[i].weight; //reduce remaining capacity
            total += items[i].value; //add full value
        }
        else{

            //take the fraction which fits
            double fraction = (double)capacity/items[i].weight;
            total += items[i].value*fraction;
            break;

        }
    }

    return total;

}

int main(){

    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    Item items[n];
    for(int i=0; i<n; i++){
        cout << "Enter the value and weight of the item " << i+1 << ": ";
        cin >> items[i].value >> items[i].weight;
    }

    int capacity;
    cout << "Enter the capacity: ";
    cin >> capacity;

    double maxValue = partialknapsack(capacity, items, n);
    cout << "Maximum value in Knapsack: " << maxValue << endl;

    return 0;

}