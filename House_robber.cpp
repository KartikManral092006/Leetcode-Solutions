class Solution {

public:
    int rob(vector<int>& nums) {
        int n = nums.size() ;
        int fir_prev = nums[0] ;
        int sec_prev = 0 ;
        for(int i = 1 ;i < n ;i++){
            int take = nums[i] ;
            if( i > 1 ){
                take+= sec_prev;
            }
            int not_take = 0 + fir_prev ;
            int curr = max(take , not_take);
            sec_prev = fir_prev ;
            fir_prev = curr ;
        }
        return fir_prev ;
    }
};
