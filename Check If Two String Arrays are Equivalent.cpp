class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string wholeString1 = "";
        string wholeString2 = "";
        for(int i = 0; i < word1.size(); i++) {
            wholeString1 += word1[i];
        }
        for(int i = 0; i < word2.size(); i++) {
            wholeString2 += word2[i];
        }
        return wholeString1 == wholeString2;
    }
};
