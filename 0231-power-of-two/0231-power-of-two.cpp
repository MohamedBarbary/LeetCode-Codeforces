class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==1) return true; //base case.
       if(n&1 || n==0) return false; // if n is odd return false.
       return isPowerOfTwo(n>>1); // recursively dividing n/2.
    }
};