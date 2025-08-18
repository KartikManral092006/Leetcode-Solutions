class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int >(26,0);
        vector<int>ans ;
        for(int i =0 ;i < s.size() ;i++){
            last[s[i]-'a'] = i ;
        }
        int initial=0 , j =0 ;
        for(int i = 0; i < s.size();i++){
            j = max(j,last[s[i]-'a']);
            if(i==j){
                ans.push_back(j-initial+1);
                initial = i+1;
            }
        }
        return ans;

    }
};
