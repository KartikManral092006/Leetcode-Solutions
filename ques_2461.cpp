class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        long long  windowSum {};
        long long maxSum{};
        int duplicateCnt = 0 ;
        if (nums.size() < k) return 0;

        for(size_t i{}; i<k;i++){
            windowSum+=nums[i];
            if(++seen[nums[i]] == 2)duplicateCnt++;
        }
        if(duplicateCnt == 0)maxSum = windowSum ;

        for(size_t i = k  ; i < nums.size() ;i++){
            int out  = nums[i-k];
            windowSum -= out;
            if(--seen[out] == 1) duplicateCnt--;
            if(seen[out]== 0)seen.erase(out);

            int added = nums[i];
            windowSum += added;
            if(++seen[added] == 2)duplicateCnt++;

            if(duplicateCnt == 0 ){
                maxSum = max(maxSum, windowSum) ;
            }
        }
        return maxSum ;
    }
};
