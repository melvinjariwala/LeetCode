// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        int mid;
        int first_bad_version=1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(!isBadVersion(mid)){
                low=mid+1;
                first_bad_version=low;
            }
            else{
                high=mid-1;
            }
        }
        return first_bad_version;
    }
};