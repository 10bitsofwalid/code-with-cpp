#include <bits/stdc++.h>
using namespace std;

int min_coins(vector<int>&coins, int amount){
    const int INF = 1e9;
    vector<int>dp(amount+1, INF);

    dp[0] = 0;
    for(int coin: coins){
        for(int i = coin; i <= amount; i++){
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    return (dp[amount] == INF) ?-1 : dp[amount];

}

int main(){
    
    int n, amount;
    cin >> n >> amount; // number of coins & target
    vector<int>coins(n);

    for(int i=0; i<n; i++) cin >> coins[i];

    int result = min_coins(coins, amount);
    if(result == -1) cout << "Not possible";
    else cout << result << endl;

}