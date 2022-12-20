// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid;
        while(low<=high){
            mid=(high-low)/2+low;
            if(isBadVersion(mid)==true){
                if(isBadVersion(mid-1)==false){
                    return mid;
                }
                else{
                    high=mid-1;
                }}
                else if(isBadVersion(mid)==false){
                    low=mid+1;
                }
            }
        return mid;
        
    }
};
