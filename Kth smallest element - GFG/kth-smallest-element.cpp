// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // int n=sizeof(arr);
        vector<int> ree;
        for(int i=l;i<=r;i++)
        ree.push_back(arr[i]);
        sort(ree.begin(),ree.end());
        return ree[k-1];
        // cout<<n;
        // for(int i=0;i<r;i++)
        // sort(arr,arr+r);
        // cout<<k;
        // int n=sizeof(arr,arr[0]);
        // return arr[k];
        // int ree=0;
        // for(int i=0;i<=k;i++)
        // {
        //     ree=arr[k];
        // }
        //code here
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends