class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int maxDistance = 0;
        int oneExist = -1;
        for(int i = 0; i < seats.size(); i++) {
           if(oneExist == -1 && seats[i] == 0) {
               maxDistance++;
           }
           else if(oneExist != -1 && seats[i] == 1){
               maxDistance = max(maxDistance, (i - oneExist) / 2);
               oneExist = i;
           }
            else if(seats[i] == 1) {
               oneExist = i;
           }
       }
        maxDistance = max(maxDistance, ((int)seats.size() - oneExist - 1));
        return maxDistance;
    }
};