class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l =0,h=nums.size()-1;
        while(l<h){
            int mid  = (h-l)/2 + l;
            if(mid%2 && nums[mid]==nums[mid-1] || !(mid%2) && nums[mid]==nums[mid+1] ){
                l=mid+1;
            }
            else{
                 h=mid;
            }
        }
        return nums[l];
    }
};