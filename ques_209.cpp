class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i - 1] + nums[i];
        }
        if (nums[nums.size() - 1] < target)
            return 0;

        int st = 0, end = 0;
        while (end < nums.size()) {
            if(nums[end]>=target) ans=min(ans,end+1);
            if (nums[end] - nums[st] >= target){
                ans=min(ans,end-st);
                st++;
            }
            else end++;
        }
        return ans;
    }
};
