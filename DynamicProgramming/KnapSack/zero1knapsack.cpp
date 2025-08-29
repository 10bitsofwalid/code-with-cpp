#include <bits/stdc++.h>
using namespace std;

void knapsack(int num, float weight[], float profit[], float capacity){

    float x[num];
    float tp = 0;

    for(int i=0; i<num; i++){
        x[i] = 0.0;
    }

    for(int i=0;  i<num; i++){

        if(weight[i] <= capacity){
            x[i] = 1.0;
            tp += profit[i];
            capacity -= weight[i];
        }
        else{
            x[i] = capacity/weight[i];
            tp += x[i]*profit[i];
            break;
        }

    }

    cout << "Result: ";
    for(int i=0; i<num; i++){
        cout << x[i];
    }
    cout << "\n" << "Total profit is: " << tp;

}

int main(){

    float capacity, temp;
    int num;

    cout << "Enter the number of objects: ";
    cin >> num;

    float weight[num];
    float profit[num];
    float ratio[num];

    cout << "Enter the weights and profits for each objects: ";
    for(int i=0; i<num; i++){
        cin >> weight[i] >> profit[i];
    }

    cout << "Enter the capacity of the Knapsack: ";
    cin >> capacity;

    for(int i=0; i<num; i++){
        ratio[i] = profit[i]/weight[i];
    }

    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){

            if(ratio[i]<ratio[j]){

                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

            }

        }
    }

    knapsack(num, weight, profit, capacity);

    return 0;

}