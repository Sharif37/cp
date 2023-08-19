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
    int n ;
    cin>>n ;
    int ind[n+1]={};
    for(int i=1 ;i<=n ;i++)
    {
        int q ;
        cin>>q ;
       ind[q]=i ;
    }
    int r=1 ;
    for(int i=0 ;i<n;i++)
     if(ind[i]>ind[i+1])
     {
        r++ ;
     }
     cout<<r<<endl ;

}