#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int arr[n];
        int even=0 ,odd=0 ;
        int mn=1e9;
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i] ;
            if(arr[i]%2==0)
            {
                even++ ;
            }
            
          mn=min(mn,arr[i]);
        }


    if(even==n || mn%2==1)
     {
        cout<<"YES"<<endl ;
     }
     else
     {
        cout<<"NO"<<endl ;
     }


    }
    return 0;
}