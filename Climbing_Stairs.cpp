class Solution {
    public:
        int climbStairs(int n) {
            if(n == 1) return 1;
            if(n == 2) return 2;
            int a = 1;
            int b = 2;
            int res;
            for(int i = 3; i <= n; i++){
                res = a + b;
                a = b;
                b = res;
            }
            return res;
        }
    };
