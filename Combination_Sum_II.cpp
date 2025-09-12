class Solution {
   void Combinations(int i , int target ,vector<int>& candidates , vector<int>& temp ,vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int j = i ;j < candidates.size();j++){
            if(j > i && candidates[j] == candidates[j-1])continue;
            if(candidates[j] >  target) break;
            temp.push_back(candidates[j]);
            Combinations(j+1, target- candidates[j] ,candidates,temp,ans);
            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(),candidates.end());
            vector<vector<int>>ans ;
            vector<int>temp ;
            Combinations(0,target,candidates,temp,ans);
            return ans;

    }
};
