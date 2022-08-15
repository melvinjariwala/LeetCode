#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>soldiers;
        vector<int>res;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
            soldiers.push_back(make_pair(sum,i));
        }
        sort(soldiers.begin(),soldiers.end());
        soldiers.resize(k);
        for(auto it:soldiers){
            res.push_back(it.second);
        }
        return res;
    }
};