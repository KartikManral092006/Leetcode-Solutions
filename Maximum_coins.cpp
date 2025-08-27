class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int t_coins = 0;

        for (int i = n - 2 ; i >= n / 3; i -= 2) {
            t_coins += piles[i];
        }
        return t_coins;
    }
};
