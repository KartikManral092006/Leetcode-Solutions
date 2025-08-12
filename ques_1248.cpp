class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        // Three Pointer Sliding Window
       int oddCnt{} ;
       int result{};
       int l{} , m {} ;
       for(int  i = 0 ;i < nums.size() ;i++){
        if (nums[i] % 2){
            oddCnt+=1;
        }
        while(oddCnt > k){
            if(nums[l] % 2){
                oddCnt -= 1 ;
            }
            l+=1;
            m =l ;
        }
        if(oddCnt == k){
            while (nums[m]%2 == 0){
                m+=1;
            }
            result += (m-l)+1;
        }
       }
       return result ;
    }
};
