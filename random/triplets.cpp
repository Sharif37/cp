#include<bits/stdc++.h>
using namespace std ;
int main()
{
int t ;
cin>>t ;
while(t--)
{
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    int target ;
    cin>>target ;
    int count=0 ;

    sort(arr,arr+n);
    for(int i=0 ;i<n-2 ;i++)
    {
        int start=0 ;
        int end=n-1 ;
        while(start<end)
        {

          int triple=arr[i]+arr[start]+arr[end];
          
            if(triple==target)
            {
                cout<<arr[i]<<" "<<arr[start]<<" " <<arr[end]<<endl ;
                count++ ;
                start++ ;
                end-- ;
            }
            else if(triple<target)
            {
                start++ ;
            }
            else
            {
                end-- ;
            }
        }
        cout<<endl ;
    }
    cout<<count<<endl ;
    
}







return 0;
}