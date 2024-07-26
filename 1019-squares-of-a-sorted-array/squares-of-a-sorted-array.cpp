class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int p=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                p=i-1;
                break;
            }
        }
        int i=p,j=p+1;
        while(i>=0 && j<nums.size()){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];

            if(a<b){
                ans.push_back(a);
                i--;
            }
            else{
                ans.push_back(b);
                j++;
            }
        }
        while(i>=0){
            int val = nums[i--];
            ans.push_back(val*val);
        }
        while(j<nums.size()){
            int val = nums[j++];
            ans.push_back(val*val);
        }
        return ans;
    }
};