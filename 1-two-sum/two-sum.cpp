class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>ans;
        vector<int>myans(2);
        for(int i=0;i<n;i++){
            int a = target-nums[i];
            if(ans.find(a)!=ans.end()){
                return {i,ans[a]};
            }
            ans[nums[i]]=i;
        }
        return {};
        
    }
};