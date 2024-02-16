class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       map<int,int>mp;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
      
       for(auto i :arr){
           mp[i]++;
           
       } 
       for(auto i:mp){
           pq.push({i.second,i.first});
       }
       while(k>=pq.top().first){
           k-=pq.top().first;
          
           pq.pop();
       }
       return pq.size();
    }
};