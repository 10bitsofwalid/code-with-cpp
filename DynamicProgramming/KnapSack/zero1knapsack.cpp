#include <bits/stdc++.h>
using namespace std;

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

    return 0;

}