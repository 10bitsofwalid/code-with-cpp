#include <bits/stdc++.h>
using namespace std;

long long max_coins(vector<int>&coins, int amount){
    vector<long long> dp(amount+1, 0);
    dp[0] = 1;
    for(int coin: coins){
        for(int i = coin; i <= amount; i++){
            dp[i] += dp[i-coin];
        }
    }

    return dp[amount];

}

int main(){
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n);
    for(int i=0; i<n; i++) cin >> coins[i];

    cout << max_coins(coins, amount) << endl;
    return 0;

}