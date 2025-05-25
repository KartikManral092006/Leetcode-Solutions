class Solution {
public:
 int LCS(string &str1 , string& str2 ,int i , int j ,vector<vector<int>>& dp){
    // Base Case for Recursion
    if(i == str1.length()){
        return 0 ;
    }
    if(j == str2.length()){
        return 0 ;
    }
    // Check if the dp vector has already a value in it or not
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = 0;
    if(str1[i] == str2[j]){
        // Store the result in the dp array
        ans = 1 + LCS(str1,str2,i+1,j+1,dp);
    }
    else{
        ans =  max(LCS(str1,str2,i+1,j,dp), LCS(str1,str2,i,j+1,dp));
    }
    // returns the ans after the inner return
    return dp[i][j] = ans ;
 }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length() , vector<int>(text2.length(),-1));
        return LCS(text1 , text2 , 0 ,0 ,dp);
    }
};
