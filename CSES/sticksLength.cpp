#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n ;
    cin>>n ;
    ll arr[n];
    ll sum=0 ;
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    ll k=arr[n/2];
    ll ans=0 ;
    for(int i=0 ;i<n ;i++)
    {
     ans+=abs(arr[i]-k);
    }
    cout<<ans<<endl ;
    

}