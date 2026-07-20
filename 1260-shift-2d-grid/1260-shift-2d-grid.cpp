class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),t=m*n;
        k%=t;
        vector<vector<int>> res(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int p=(i*n+j+k)%t;
                res[p/n][p%n]=grid[i][j];
            }
        }
        return res;
    }
};