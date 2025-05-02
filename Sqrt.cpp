class Solution {
    public:
        int mySqrt(int x) {
            int i = 1,j=x;
            while (i < j) {
                int mid = i + (j - i) / 2;
                if (mid >= x/mid) {
                    j = mid;
                } else {
                    i = mid + 1;
                }
            }
            if (i == x/i) return i;
            else return i - 1;
        }
    };
