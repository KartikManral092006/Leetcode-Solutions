class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26);
        for (char ss : s) freq[ss - 'a']++;
        for (char tt : t)
            if (freq[tt - 'a'] == 0) return tt;
            else freq[tt - 'a']--;
        return '!';
    }
};
