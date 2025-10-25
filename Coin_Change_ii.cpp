class Solution {
public:

int countTarget(vector<int>& coins ,int idx, int target , vector<vector<int>>& dp){
        if(idx == 0){
            if(target % coins[idx]==0)return 1;
            return 0;

        }
        if(dp[idx][target] != -1)return dp[idx][target];
        int notTake =  countTarget(coins,idx-1,target,dp);
        int take =0 ;
        if(coins[idx] <= target) take = countTarget(coins,idx , target-coins[idx],dp);
        return dp[idx][target] =take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return countTarget(coins, n - 1, amount, dp);


    }
};
