#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int length=nums1.size();
        if(length%2==0){
            return ((nums1[(length/2)-1]+nums1[length/2])/2.00000);
        }
        else{
            return (nums1[length/2]);
        }
        return -1;
    }
};