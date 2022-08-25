#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int AOI(vector<vector<int>>&grid,int i,int j){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && grid[i][j]==1){
            grid[i][j]=0;
            return 1 + AOI(grid,i-1,j) + AOI(grid,i+1,j) + AOI(grid,i,j-1) + AOI(grid,i,j+1);
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    res=max(res,AOI(grid,i,j));
                }
            }
        }
        return res;
    }
};