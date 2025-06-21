class Solution {
public:
    bool isSafe(vector<string>board,int row ,int n ,int col){
        //Horizontally safe
        for(int i = 0 ; i < n ;i++){
            if(board[row][i] == 'Q'){
                return false ;
            }
        }
        // Vertically safe
        for(int j = 0 ; j < n ; j++){
            if(board[j][col] == 'Q'){
                return false;
            }
        }
        // right diagonal
        for(int i = row , j = col ; i >=0 && j >= 0; i-- ,j--){
            if(board[i][j] =='Q'){
                return false;
            }
        }
        // left Diagonal
        for(int i = row , j = col ; i >=0 && j <n ; i-- ,j++){
            if(board[i][j] =='Q'){
                return false;
            }
        }
        return true ;
    }
    void nQueens(vector<string>& board ,int row , int n , vector<vector<string>>& ans ){
        if(row == n) {
            ans.push_back({board});
            return ;
        }
        for(int j = 0 ; j < n; j++){
            if(isSafe(board,row,n,j)){
                board[row][j] = 'Q';
                nQueens(board,row+1,n,ans);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n , string(n , '.'));
        vector<vector<string>>ans;
       nQueens(board , 0 , n , ans);
       return ans ;
    }
};
