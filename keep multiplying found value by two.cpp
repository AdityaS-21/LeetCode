class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>map;
        for(auto i:nums){
            map[i]++;
        }
        for(auto i:map){
            if(map.find(original)!=map.end())
                    original*=2;
            }
        return original;
        
    }
};
