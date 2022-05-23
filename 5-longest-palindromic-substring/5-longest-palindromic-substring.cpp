class Solution {
public:
    // bool checkForPalindrome(string s)
    // {
    //     string reserseStr=s;
    //     reverse(reserseStr.begin(),reserseStr.end());
    //     if(s==reserseStr)
    //         return true;
    //     return false;
    // }
    string longestPalindrome(string str) {
        // if(checkForPalindrome(s)==true)
        //     return s;
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=s.size()-1;j>=0;j--)
        //     {
        //         if(s[i]==s[j])
        //         {
        //             if(i!=j)
        //             {
        //                 string newStr=s.substr(i, j);
        //                 if(checkForPalindrome(newStr)==true)
        //                     return newStr;
        //             }
        //         }
        //     }
        // }
        // string newStr=s.substr(0, 1);
        // return newStr;
        int n = str.size();
        int longest = 0;
        string res = "";
        for(int i = 0; i < n; i++)
        {
            int left = i;
            int right = i;
            while(left >= 0 && right < n && str[left] == str[right])
            {
                int curr_size = right - left + 1;
                if(curr_size > longest)
                {
                    longest = curr_size;
                    res = str.substr(left, curr_size);
                }
                left--;   
                right++;
            }
            left = i;
            right = i + 1;
            while(left >= 0 && right < n && str[left] == str[right])
            {
                int curr_size = right - left + 1;
                
                if(curr_size > longest)
                {
                    longest = curr_size;
                    res = str.substr(left, curr_size);
                }
                left--;
                right++;
            }
        }
        return res;
    }
};