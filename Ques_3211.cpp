class Solution {
public:

// BACKTRACKING APPROACH
    void generate(int n, vector<std::string>& res ,  std::string live){
        if(n == 0 ){
            res.push_back(live);
            return ;
        }
        live.push_back('1');
        generate(n-1 ,res , live);
        live.pop_back();
        if(live.size() == 0 || live.back() == '1'){
            live.push_back('0');
            generate(n-1,res,live);
            live.pop_back();
        }
    return ;
    }
    vector<string> validStrings(int n) {
        vector<string>result ;
        std::string live ;
        generate(n , result , live );
        return result;
    }
};
