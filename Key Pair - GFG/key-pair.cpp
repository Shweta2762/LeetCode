// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	   // unordered_set<int> uset;
	   // for(int i=0;i<n;i++)
	   // {
	   //     int key=arr[i];
	   //     uset.insert(key);
	   // }
	   // for(int i=0;i<n;i++)
	   // {
	   //     int key=arr[i];
	   //     int maxx=max(x,key);
	   //     int minn=min(x,key);
	   //     int findd=maxx-minn;
	   //     if(uset.find(findd)!=uset.end())
	   //     return true;
	   // }
	   // return false;
	   /*cannot use set here explaination at 
	   
	   https://www.youtube.com/watch?v=7xx1YcXXEYU&list=PLzjZaW71kMwQ-D3oxCEDHAvYu8VC1XOsS&index=12
	   
	   */
	   unordered_map<int,int>u_map;
	   for(int i=0;i<n;i++)
	   {
	       int key=arr[i];
	       u_map[key]++;
	   }
	   for(auto it=u_map.begin();it!=u_map.end();it++)
	   {
	       int key=it->first;
	       int val=it->second;
	       int pair=x-key;
	       if(pair==key)
	       {
	           if(val>1)
	           return true;
	           
	       }
	       else
	           {
	               if(u_map.find(pair)!=u_map.end())
	               return true;
	           }
	   }
	   return false;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } Driver Code Ends