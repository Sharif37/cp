#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n ;
        cin>>n ;
        ll arr[n];
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i];
        }

        int flag=0 ;
        for(int i=0 ;i<n-1;i++)
        {
            if(arr[i+1]<arr[i]){
            flag=1 ;
            break ;
            }
        }
        int m=1e9 ;
        if(flag)
        {
            cout<<0<<endl ;
        }else
        {
        for(int i=0 ;i<n-1;i++)
        {
            int s=arr[i+1]-arr[i] ;
            if(s<m)
            {
              m=min(m,s);
            }
        }
        if(m==0)
        {
            cout<<1<<endl ;
        }
        
        else if(m%2==0)
        {
            cout<<m/2+1<<endl ;
        }
        else
        {
            cout<<ceil(m/2.0)<<endl ;
        }
        }

        
       

    }

    return 0;
}