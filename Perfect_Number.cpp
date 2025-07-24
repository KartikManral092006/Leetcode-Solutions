class Solution {
public:
    bool checkPerfectNumber(int num) {
        size_t t_Sum{0};
        for(size_t  i{1} ;i < num ;i++){
            if(num % i == 0){
                t_Sum += i;
            }
        }
        if(t_Sum == num)return true ;
        return false;
    }
};
