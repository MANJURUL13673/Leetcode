class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    for(int k = 0; k < 4; k++)
                    {
                        if(i + dx[k] < 0 || i + dx[k] >= grid.size() || j + dy[k] < 0 || j + dy[k] >= grid[i].size() || grid[i + dx[k]][j + dy[k]] == 0) {
                           perimeter++; 
                        }
            }
        }
                           }
                           }
                           return perimeter;
    }
};