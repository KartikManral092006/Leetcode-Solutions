class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        long long temp  = 1 ;
        while(temp < n ){
            temp*=4 ;
            if(temp == n ){
                return true ;
            }
        }
        return false;

    }
};
