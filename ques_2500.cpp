class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0, maxi = -1;
        for(int i=0; i<m; i++)
            sort(grid[i].begin(), grid[i].end());

        for(int i=n-1; i>=0; i--){
            maxi = -1;
            for(int j=0; j<m; j++){
                maxi = max(maxi, grid[j][i]);
                grid[j].pop_back();
            }
            ans += maxi;
        }
        return ans;
    }
};
