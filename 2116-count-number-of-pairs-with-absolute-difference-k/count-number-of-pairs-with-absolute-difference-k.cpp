class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                count+=mp[nums[i]-k];
            }
            if(mp.find(nums[i]+k)!=mp.end()){
                count+=mp[nums[i]+k];
            }
            
                mp[nums[i]]++;
            
        }
        return count;
    }
};