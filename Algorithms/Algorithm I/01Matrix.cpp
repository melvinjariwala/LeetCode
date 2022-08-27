#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size(), c=mat[0].size(), maxLength=r+c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0) continue;
                int north=maxLength, west=maxLength;
                if(i-1>=0)
                    north=mat[i-1][j];
                if(j-1>=0)
                    west=mat[i][j-1];
                mat[i][j]=min(north,west)+1;
            }
        }
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(mat[i][j]==0) continue;
                int south=maxLength, east=maxLength;
                if(i+1<r)
                    south=mat[i+1][j];
                if(j+1<c)
                    east=mat[i][j+1];
                mat[i][j]=min(mat[i][j],min(south,east)+1);
            }
        }
        return mat;
    }
};