class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fo=-1;
        int lo=-1;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid = (h-l)/2+l;
            if(nums[mid]==target){
                fo=mid;
                h = mid-1;
            }
            else if(nums[mid]<target)l= mid+1;
            else h=mid-1;
        }
        int li=0,hi=nums.size()-1;
        while(li<=hi){
            int mid = (hi-li)/2+li;
            if(nums[mid]==target){
                lo=mid;
                li = mid+1;
            }
            else if(nums[mid]<target)li= mid+1;
            else hi=mid-1;
        }
        return {fo,lo};

    }
};