class Solution {
public:
    bool haveConflict(vector<string>& e1, vector<string>& e2) {
        int s1 = stoi(e1[0].substr(0,2))*60 + stoi(e1[0].substr(3,2));
        int en1 = stoi(e1[1].substr(0,2))*60 + stoi(e1[1].substr(3,2));
        int s2 = stoi(e2[0].substr(0,2))*60 + stoi(e2[0].substr(3,2));
        int en2 = stoi(e2[1].substr(0,2))*60 + stoi(e2[1].substr(3,2));

        return s2<=en1 && s1<=en2;
    }
};