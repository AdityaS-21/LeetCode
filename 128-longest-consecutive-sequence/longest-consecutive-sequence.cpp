class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> checked,present;
        for(auto i:nums){
            present[i]=true;
        } 
        int ans=0;
        for(auto i: nums){
            if(!checked[i] && !present[i-1]){
                int maxi=0;
                int start = i;
                while(present[start]){
                    maxi++;
                    checked[start]=true;
                    start++;
                }
                ans = max(ans,maxi);
            }
        } 
        return ans; 
    }
};