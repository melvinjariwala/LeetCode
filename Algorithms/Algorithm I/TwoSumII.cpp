#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1,sum=numbers[i]+numbers[j];
        while(sum!=target){
            if(sum<target){
                sum=numbers[++i]+numbers[j];
            }
            else{
                sum=numbers[i]+numbers[--j];
            }
            sum=numbers[i]+numbers[j];
        }
        return {i+1,j+1};
    }
};