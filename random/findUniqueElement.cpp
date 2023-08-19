//using xor 

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n ,k;
        cin>>n>>k ;
        int arr[n];
        
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i] ;
         
        }
      if(k>=n)
      {
        cout<<0<<endl ;
        return 0 ;
      }
      sort(arr,arr+n);
      vector<int>v ;
       int ans=0 ;
       for(int i=0 ;i<n-1;i++)
      v.push_back( arr[i+1]-arr[i]);
       sort(v.begin(),v.end()) ;

for(int i=0 ;i<k-1 ;i++)
ans+=v[i] ;

       cout<<"ans="<<ans<<endl ;





    }

    return 0;
}