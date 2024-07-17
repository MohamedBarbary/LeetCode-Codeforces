class Solution {
public:
    bool isPowerOfThree(int n) {
        bool res;
      
       if (n==3 || n==1) { return true;}
        else if(n%3!=0 || n<=0) 
            return false;
        return   isPowerOfThree(n/3);
    }
};