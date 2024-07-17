class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int len = 0;
        bool flag = 0;
        unordered_map<string, int> mp;
        
        for (auto i: words) {
            mp[i]++;
        }

        for (auto i: mp) {
            if (i.first[0] != i.first[1]) {
                string s = i.first;
                reverse(s.begin(), s.end());
                if (mp.find(s) != mp.end()) {
                    int count = min(i.second, mp[s]);
                    len += count * 4;
                    mp[i.first] -= count;
                    mp[s] -= count;
                }
            } 
        }

        for (auto i: mp) {
            if (i.first[0] == i.first[1]) {
                int count = i.second;
                if (count % 2 == 0) {
                    len += count * 2;
                } else {
                    len += (count - 1) * 2;
                    flag = 1;
                }
            }
        }

        if (flag) {
            len += 2;
        }

        return len;
    }
};
