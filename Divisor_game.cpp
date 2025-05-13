class Solution {
public:
    bool divisorGame(int n) {
        int player = 0;
        while(n!=1){
            player += 1;
            n -= 1;
        }
        if(player%2==0){
            return false;
        }else{
            return true;
        }
    }
};
