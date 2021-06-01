class Solution {
public:
    int dp[203][203];
    int res(vector<vector<int>> &grid, int i, int j){
        if(i==grid.size()-1 and j==grid[0].size()-1)
            return grid[i][j];
        else{
            if(dp[i][j]!=-1)
                return dp[i][j];
            int t1=10000;
            int t2=10000;
            if(i+1<grid.size())
                t1=res(grid, i+1, j)+grid[i][j];
            if(j+1<grid[0].size())
                t2=res(grid,i,j+1)+grid[i][j];
            // cout<<i<<" "<<j<<" "<<min(t1,t2)<<endl;
            return dp[i][j]=min(t1,t2);
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1, sizeof(dp));
        return res(grid, 0,0);
    }
};