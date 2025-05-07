class Solution {
    public:
        vector<int> buildArray(vector<int>& nums) {
            std::vector<int>vec;
            for(size_t i = 0 ;i < nums.size() ;i++){
                vec.push_back(nums[nums[i]]);
            }
            return vec;
        }
    };
