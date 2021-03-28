class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[200];
        memset(hash, -1, sizeof(hash));
        int maxSiz = 0;
        int siz = 0;
        int lastPos = -1;
        for(int i = 0; i < s.length(); i++) {
            if(hash[s[i]] >= lastPos) {
                lastPos = hash[s[i]] + 1;
                hash[s[i]] = i;
                siz = i - lastPos + 1;
            }
            else {
                hash[s[i]] = i;
                siz++;
            }
            maxSiz = max(maxSiz, siz);
        }
        return maxSiz;
    }
};