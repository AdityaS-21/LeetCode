class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       map<int,int>mp;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
       set<int>s;
       for(auto i :arr){
           mp[i]++;
           s.insert(i);
       } 
       for(auto i:mp){
           pq.push({i.second,i.first});
       }
       while(k>=pq.top().first){
           k-=pq.top().first;
           s.erase(pq.top().second);
           pq.pop();
       }
       return s.size();
    }
};