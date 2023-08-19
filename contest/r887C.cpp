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
    int t ;
    cin>>t ;
    while(t--)
    {
        ll n,d ;
        cin>>n>>d ;
        vector<ll>v ;
        for(int i=0 ;i<n ;i++)
        {
            int a;
            cin>>a ;
            v.pb(a);
        }
        ll j=0 ,r=1 ;
        for(int i=0 ;i<d ;i++)
        {
                while(j<n && v[j]<=r+j)
                {
                    j++ ;
                }
                    r+=j ;
                

        }
        cout<<r<<endl ;

    }
}