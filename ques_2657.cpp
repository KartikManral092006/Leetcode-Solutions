class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> freq(51,0);
        vector<int> C(A.size(), 0) ;
        int common =0 ;
        for(int i =0 ;i < A.size() ;i++){
            freq[A[i]]++;
            if(freq[A[i]] == 2) common++;

            freq[B[i]]++;
            if(freq[B[i]] == 2) common++;

            C[i] =common;
        }
        return C ;
    }
};
