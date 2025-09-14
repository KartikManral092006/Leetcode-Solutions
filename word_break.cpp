class Solution {
private:
    bool solve(string &s, vector<string> &dict, int index, vector<vector<int>> &dp){
        if(s.size() == 0) return true;
        if(index >= dict.size()) return false;

        // Check if already computed
        if(dp[index][s.size() - 1] != -1){
            return dp[index][s.size() - 1] == 1;
        }

        int currSize = dict[index].size();
        string subs = s.substr(0, currSize);

        if(subs == dict[index]){
            string temp = s.substr(currSize);
            if(solve(temp, dict, 0, dp)){
                return dp[index][s.size() - 1] = 1;
            }
        }


        return dp[index][s.size() - 1] = solve(s, dict, index + 1, dp);
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = wordDict.size(), m = s.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(s, wordDict, 0, dp);
    }
};
