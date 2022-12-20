class Solution {
public:
       
    int mySqrt(int x) {
        int s=0;
        int e=x;
         while(s<=e){
            long long mid=s+(e-s)/2;
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid<x){
                if((mid+1)*(mid+1)>x){
                    return mid;
                }
                s=mid+1;
            }
            else{
                e=mid-1;
            }
           
        }
        return 0;
    }
        

};
