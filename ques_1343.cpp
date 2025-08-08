class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count{0};
        int windowSum = 0 ;
        for(size_t i{} ;i< k;i++){
            windowSum+=arr[i];
        }
        if(windowSum/k >= threshold)count++;

        for(size_t i = k ; i < arr.size() ; i++){
            windowSum+=arr[i]-arr[i-k];
            if(windowSum/k >= threshold)count++;
        }
        return count ;
    }
};
