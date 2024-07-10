class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>minFreq;
        for(char ch='a';ch<='z';ch++){
            minFreq[ch]=1000;
        }
        for(auto i:words){
            unordered_map<char,int>mp;
            for(auto ch: i){
                mp[ch]++;
            }
            for(char ch='a';ch<='z';ch++){
                minFreq[ch]=min(mp[ch],minFreq[ch]);
            }
        }
        vector<string>ans;
        for(char ch='a';ch<='z';ch++){
            while(minFreq[ch]>0){
                ans.push_back(string(1,ch));
                minFreq[ch]--;
            }
        }
        return ans;
    }
};