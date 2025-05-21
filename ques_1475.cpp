class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        int i = 0, j = 0;
        while(i < n-1){
            j = i + 1;
            while(prices[i] < prices[j]){
                j++;
                if(j >= n) break;
            }
            if(j < n) {
                prices[i] = prices[i] - prices[j];
            }
            i++;
        }
        return prices;
    }
};
