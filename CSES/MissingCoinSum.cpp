#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n ;
    cin>>n ;
    ll arr[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll r=0 ;
    for(int i=0 ;i<n ;i++)
    {
        if(r+1 < arr[i])
        {
            cout<<r+1<<endl ;
            return 0 ;
        }
        r+=arr[i];
    }
    cout<<r+1<<endl ;

}