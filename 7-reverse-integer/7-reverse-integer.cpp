class Solution {
public:
    int reverse(int x) {
        long temp = x;   
        bool flag = false;   
        if (x < 0) {
            temp*= -1;
            flag = true;
        }
        long reverse = 0;
        while (temp > 0) {
            int mod = temp % 10;
            temp/= 10;
            if(  reverse*10 >INT_MAX)
                return 0;
            reverse = reverse*10 + mod;
        }
        if (flag) {
            return -reverse;
        }
        return reverse;   
        
    }
};