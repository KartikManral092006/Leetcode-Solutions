class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return longestIncSub(nums, 0, -1, dp);
    }

private:
    int longestIncSub(vector<int>& n, int index, int prevIdx, vector<vector<int>>& dp) {
        if (index == n.size()) return 0;
        if (dp[index][prevIdx + 1] != -1) return dp[index][prevIdx + 1];
        int len = 0;
         len = longestIncSub(n, index + 1, prevIdx, dp);
        if (prevIdx == -1 || n[index] > n[prevIdx]) {
            len = max(len,1 + longestIncSub(n, index + 1, index, dp));
        }
        return dp[index][prevIdx + 1] = len;
    }
};
