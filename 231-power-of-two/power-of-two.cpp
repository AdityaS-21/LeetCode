class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        bool a;
        a = (n& (n-1)) == 0?true : false;
        return a;
    }
};