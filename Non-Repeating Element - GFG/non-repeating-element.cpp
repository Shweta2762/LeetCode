// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    {
        unordered_map<int,int> umaped;
        for(int i=0;i<n;i++)
        {
            int key=arr[i];
            umaped[key]++;
        }
        for(int i=0;i<n;i++)
        {
            int key=arr[i];
            auto temp=umaped.find(key);
            if(temp->second==1)
            return key;
        }
        
        // Complete the function
        
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
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends