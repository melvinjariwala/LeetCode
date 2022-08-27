#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), minutes=0, freshOranges=0, res=-1;
        vector<int> dir={-1,0,1,0,-1};
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) freshOranges++;
            }
        }
        while(!q.empty()){
            int rotten=q.size();
            while(rotten--){
                pair<int,int>p=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int row=p.first+dir[i], col=p.second+dir[i+1];
                    if(row>=0 && row<m && col>=0 && col<n &&grid[row][col]==1){
                        grid[row][col]=2;
                        q.push({row,col});
                        freshOranges--;
                    }
                }
            }
            res++;
        }
        if(freshOranges>0) return -1;
        if(res==-1) return 0;
        return res;
    }
};