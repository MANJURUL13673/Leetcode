class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>>ans;

        int maxi;
        for(int i = 0; i < intervals.size(); i++) {
            vector<int>pair;
            pair.push_back(intervals[i][0]);
            maxi = intervals[i][1];
            while(i+1 < intervals.size() && maxi >= intervals[i+1][0]) {
                maxi = max(intervals[i+1][1], maxi);
                i++;
            }
            pair.push_back(maxi);
            ans.push_back(pair);
        }
        return ans;
    }
};
