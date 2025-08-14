class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>v1;
        // vector<int>v2;
        // vector<int>result;
        // for(size_t i = 0 ; i < nums.size() ;i++){
        //     if(nums[i] < 0){
        //         v2.push_back(nums[i]);
        //     }else{
        //         v1.push_back(nums[i]);
        //     }
        // }
        // int pos=0 ,neg = 0;
        // for(size_t i{} ;i < nums.size();i++){
        //     if(i%2 == 0){
        //         result.push_back(v1[pos++]);
        //     }else{
        //         result.push_back(v2[neg++]);
        //     }
        // }
        // return result;



        // Two Pointer

        int n = nums.size();
        vector<int>ans(n,0);
        int pos {};
        int neg {1} ;
        for(int i = 0 ;i < n ;i++){
            if(nums[i] > 0){
                ans[pos] = nums[i];
                pos+=2;
            }else{
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};
