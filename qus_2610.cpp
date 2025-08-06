class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    //     vector<int>table();
    //     vector<vector<int>> result ;
    //      for(int i{} ; i< nums.size();i++){
    //         int index = hash(nums[i]);
    //         if(table[index] != -1){
    //             result.push_back({table});
    //             table.clear();
    //         }else{
    //             table[index]=nums[i];
    //         }
    //     }
    //     return result;
        unordered_map<int,int> freq ;
        vector<vector<int>> result;

        for(int num :nums){
            int row = freq[num];
              if (row == result.size()) {
                result.push_back({});
            }
            result[row].push_back(num);
            freq[num]++;
        }
        return result;
     }
};
