class Solution {
public:
    int arrangeCoins(int n) {
        int low=1,high=n;
        while(low<=high){
            long long mid=(high - low)/2+low;
            if(((mid*mid)+mid)/2<=n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low-1;
        
    }
};
