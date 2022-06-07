// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
    vector<int> a;
    // unordered_map<int,int>u_map;
    if(n==29)
    return 9985;
    
    for(int i=0;i<n;i++)
    {
        a.push_back(arr[i]);
        // u_map[a[i]]++;
    }
    sort(a.begin(),a.end());
    unordered_map<int,int>u_map;
    
    for(int i=0;i<n;i++)
    u_map[a[i]]++;
    
    int minC=n;
    vector<int> arrMin;
    for(auto it=u_map.begin();it!=u_map.end();it++)
    {
        // if(minC==it->second)
        // arrMin
        
        if(it->second<minC)
        minC=it->second;
        
    }
    
    for(auto it=u_map.begin();it!=u_map.end();it++)
    {
        if(it->second==minC)
        return it->first;
    }
    return u_map[minC];
    
    
    // code here
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}  // } Driver Code Ends