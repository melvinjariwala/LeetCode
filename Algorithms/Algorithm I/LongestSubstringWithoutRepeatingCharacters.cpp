#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int res=0,j=-1;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])!=0){
                j=max(j,mp[s[i]]);
            }
            mp[s[i]]=i;
            res=max(res,i-j);
        }
        return res;
    }
};