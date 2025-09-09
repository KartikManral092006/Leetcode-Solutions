class Solution {
    int rob (int idx , vector<int>& nums ,vector<int>& dp){
        if(idx == 0) return nums[0];
        if(idx < 0)return 0;
        if(dp[idx] != -1)return dp[idx];
        int take = nums[idx] + rob(idx-2 ,nums,dp);
        int not_take = 0 + rob(idx-1 ,nums,dp );

        return dp[idx] = max(take ,not_take);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int>v1(nums.begin()+1 , nums.end());
        vector<int>v2(nums.begin() , nums.end()-1);
        vector<int>dp1(n-1,-1) ;
        vector<int>dp2(n-1,-1) ;
        return max(rob(n-2,v1,dp1) , rob(n-2,v2,dp2));
    }
};
