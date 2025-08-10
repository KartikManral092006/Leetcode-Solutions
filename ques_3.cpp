class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        vector<int> freq(256,0);
        // int l{};
        // int length = 1 ;
        // for(int r{1} ;r<s.length();r++){
        //     char ch = s[l];
        //     freq[ch]++;
        //     freq[s[r]]++;

        //     if(freq[s[r]] <= 1){
        //        length++;
        //     }else{
        //        while(freq[s[r]] > 1){
        //         freq[s[l]]--;
        //         l++;
        //        }
        //        ans= max(ans,length);
        //        length = r-l+1;
        //     }
        // }
        //   ans= max(ans,length);
        // return ans;
        int l = 0 ;
        for(int r = 0 ; r < s.size();r++){
            freq[s[r]]++;

            while(freq[s[r]] >1){
                freq[s[l]]--;
                l++;
            }
           ans = max(ans,r-l+1);
        }
        return ans ;
    }
};
