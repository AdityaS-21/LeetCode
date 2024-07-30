class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int count =0,ans=0;
        int i=0,j=0;
        while(i<s.size() && j<s.size()){
            if(mp.find(s[j])==mp.end()){
                mp[s[j]]=j;
                count = max(count,j-i+1);
                j++;
            }
            else{
                int k = mp[s[j]];
                while(i<=k){
                    mp.erase(s[i]);
                    i++;
                }
                i=k+1;
                mp[s[j]]=j;
                j++;
            }
        }
        return count;
    }
};