class Solution {
public:
    int minPartitions(string n) {
         int max=0;
         for(auto i:n){
             if(i>max) max=i;
         }
         return max-48;
    }
};