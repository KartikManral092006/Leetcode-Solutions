class Solution {
    void find_Combinations(int idx , int target , vector<int> &candidates , vector<int> &each , vector<vector<int>>& res){
        if(idx == candidates.size()){
            if(target == 0){
                res.push_back(each);
        }
        return;
    }
    if(candidates[idx] <= target){
        each.push_back(candidates[idx]);
        find_Combinations(idx , target - candidates[idx] ,candidates ,each,res);
        each.pop_back();
    }
    find_Combinations(idx+1,target ,candidates ,each,res);

    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>each ;
        vector<vector<int>>res;
        find_Combinations(0,target,candidates,each,res);
        return res;
    }
};
