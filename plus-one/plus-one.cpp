class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*int checkpro=1;
        int ree=0;
        for(int i=digits.size()-1;i<=0;i--)
        {
            int addd=digits[i]*checkpro;
            ree=ree+addd;
            checkpro=checkpro*10;
        }
        ree=ree+1;
        vector<int>reesult;
        for(int i=0;i<digits.size();i++)
        {
            
        }*/
        /*if(digits[-1]!=9)
            digits[-1]=digits[-1]+1;
        return digits;*/
        int n=digits.size()-1;
        while(n>=0)
        {
            digits[n]=digits[n]+1;
            if(digits[n]==10)
            {
                digits[n]=0;
                n=n-1;
            }
            else
                break;
        }
        if(n==-1 && digits[0]==0)
        {
            
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};