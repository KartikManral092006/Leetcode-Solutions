class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count{numBottles};
        while(numBottles >= numExchange){
            int exchanged = numBottles / numExchange ;
            count+= exchanged;
             numBottles = exchanged + (numBottles  % numExchange ) ;
        }
        return count ;
    }
};
