class Solution {
public:
    bool isPowerOfThree(int n) {
        // int temp=n;
        // while(temp>1)
        // {
        //     temp=temp/3;
        // }
        // if(temp==1)
        //     return 1;
        // else
        // return 0;
        
        if(n<=0)
         return false; //if value of n is negative or 0 it is definitely not power of 3 
     double x = log10(n)/log10(3);
     if(x==(int)x)
         return true;
     return false;
        
    }
};