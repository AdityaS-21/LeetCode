class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int s = nums.size();
        

        sort(nums.begin(), nums.end());

        vector<vector<int>> res(s/3, vector<int>(3));
        int x = 0;
        for (int i = 0; i < s; i += 3) {
            if (i + 2 < s && nums[i + 2] - nums[i] <= k) {
                res[x] = { nums[i], nums[i + 1], nums[i + 2] };
                x++;
            }
            else {
                return vector<vector<int>>();
            }
        }
        return res;
    }
}; 


