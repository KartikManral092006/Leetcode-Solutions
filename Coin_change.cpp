class Solution {
public:
    int countTarget(vector<int>& coins ,int idx, int target , vector<vector<int>>& dp){
        if(idx == 0){
            if(target % coins[idx]==0)return target/coins[idx];
            return 1e9;

        }
        if(dp[idx][target] != -1)return dp[idx][target];
        int notTake = 0 + countTarget(coins,idx-1,target,dp);
        int take = INT_MAX ;
        if(coins[idx] <= target) take = 1+countTarget(coins,idx , target-coins[idx],dp);
        return dp[idx][target] = min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans = countTarget(coins, n - 1, amount, dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};
