#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int n, int capacity, vector<int>&value, vector<int>&weight){

    vector<vector<int>> dp(n+1, vector<int>(capacity+1, 0)); //2D dynamic programming table

    //fill up the table
    for(int i=0; i<=n; i++){
        for(int w=0; w<=capacity; w++){

            //check if current item can fit in the current capacity
            if(weight[i-1] <= w){

                //take the maximum between: (not taking the item) & (taking item and adding value to the capacity)
                dp[i][w] = max(dp[i-1][w], value[i-1] + dp[i-1][w-weight[i-1]]);

            }
            else{
                dp[i][w] = dp[i-1][w]; //if items don't fit keep the previous best value
            }

        }
    }

    return dp[n][capacity];

}

int main(){

    int n;
    int capacity;

    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter the capacity: ";
    cin >> capacity;

    vector <int> value(n);
    vector <int> weight(n);

    for(int i=0; i<n; i++){
        cout << "Enter the value and weight for item " << i+1 << ": ";
        cin >> value[i] >> weight[i];
    }

    int maxvalue = knapsack(n, capacity, value, weight);
    cout << "Max value: " << maxvalue <<endl;

    return 0;

}