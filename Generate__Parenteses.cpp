class Solution {
public:
    void GP(vector<string> & vec , std:: string s , int openingP , int closingP , int n ){
        if(openingP == n && closingP == n ){
            vec.push_back(s);
            return ;
        }
        if(openingP < n){
            GP(vec, s+"(" , openingP+1 , closingP ,n);
        }

        if( closingP < openingP ){
            GP(vec , s+")" , openingP , closingP+1,n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> combinations ;
        GP(combinations , "" , 0,0,n);
        return combinations;
    }
};
