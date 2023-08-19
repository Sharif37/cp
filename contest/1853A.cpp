#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n ;
        cin>>n ;
        ll arr[n];
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i] ;
        }
        ll mn=100000000  ;
        for(int i= 0;i<n-1 ;i++)
        {
             
              if(mn>(arr[i+1]-arr[i]))
              {
                cmin(mn,(arr[i+1]-arr[i]));
              }
        }
        
        }
    }

    return 0;
}

