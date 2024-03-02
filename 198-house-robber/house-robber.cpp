class Solution {
public:
    //--------------------MEMOIZATION---------------------
    // int cal(vector<int>& nums,int ind,vector<int>& dp){
    //     if(ind==0) return nums[0];
    //     if(ind<0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int pick = nums[ind] + cal(nums,ind-2,dp);
    //     int Not_pick = 0 + cal(nums,ind-1,dp);
    //     return dp[ind]=max(pick,Not_pick);
    // }
    int rob(vector<int>& nums) {
    //----------Tabulation-------------
        int n=nums.size();
        // vector<int>dp(n,-1);
        // dp[0]=nums[0];
        // for(int i=1;i<n;i++){
        //     int pick = nums[i];
        //     if(i>1) pick+=dp[i-2];
        //     int Not_pick = 0 + dp[i-1];
        //     dp[i]=max(pick,Not_pick);
        // }  
        // return dp[n-1];
//-------------SPACE OPTIMIZATION---------------
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int pick = nums[i];
            if(i>1) pick+=prev2;
            int Not_pick = 0 + prev;
            int curr=max(pick,Not_pick);
            prev2=prev;
            prev=curr;
        }  
        return prev;
    }
};