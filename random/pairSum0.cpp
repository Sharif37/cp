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
        unordered_set<int>s ;
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i] ;
            
        }

        for(int i=0 ;i<n ;i++)
        {
              int x=0-arr[i] ;
              if(s.find(x)!=s.end())
              {
                cout<<arr[i]<<" "<<x<<endl ;
              }
              else
              {
                s.insert(arr[i]);
              }
        }
    }

    return 0;
}