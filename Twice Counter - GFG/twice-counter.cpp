// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            unordered_map<string,int> u_map;
            for(int i=0;i<n;i++)
            {
                u_map[list[i]]++;
            }
            int count=0;
            for(auto itr=u_map.begin();itr!=u_map.end();itr++)
            {
                if(itr->second == 2)
                count++;
                // cout<<itr->first<<"="<<itr->second<<" ";
            }
            return count;
           //code here.
        }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends