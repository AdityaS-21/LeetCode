class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool a=false;
        a = ((n>0) && (n & (n-1)) == 0)?true : false;
        return a;
    }
};