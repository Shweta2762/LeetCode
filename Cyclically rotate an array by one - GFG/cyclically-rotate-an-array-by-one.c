// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends

// 0->1
// 1->2
// 2->3
// 3->4
// 4->0
void rotate(int arr[], int n)
{
    int temp=arr[0];
    int ree[n];
    ree[0]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        ree[i]=arr[i-1];
    }
    for(int i=0;i<n;i++)
    arr[i]=ree[i];
    // ree
}