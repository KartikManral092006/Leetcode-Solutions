class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        auto maxVal = *max_element(nums.begin() ,nums.end());
        vector<int>cnt(maxVal+1,0);
        for(size_t  i{} ; i< nums.size() ;i++){
            cnt[nums[i]]++;
        }
        nums.clear();
        for(size_t  i {} ; i< cnt.size() ; i++){
            if(cnt[i] >= 2)
            nums.push_back(i);
        }
        return nums;
    }
};
