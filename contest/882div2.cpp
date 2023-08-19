#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n ;
        cin>>n ;
        int arr[n] ;
        cin>>arr[0] ;
        int ans=arr[0] ;
        for(int i=1;i<n ;i++)
        {
            ans^=arr[i] ;
        }
        cout<<"ans="<<ans<<endl ;
        
    }

    return 0;
}