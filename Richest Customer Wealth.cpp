class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxAmmount = 0, totalAmmount;
        for(int i = 0; i < accounts.size(); i++) {
            totalAmmount = 0;
            for(int j = 0; j < accounts[i].size(); j++) {
                totalAmmount += accounts[i][j];
            }
            maxAmmount = max(totalAmmount, maxAmmount);
        }
        return maxAmmount;
    }
};
