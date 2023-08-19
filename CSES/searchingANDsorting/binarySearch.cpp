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
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    cin>>x ;
    int k=0 ;
    for(int b=n/2 ;b>=1 ;b/=2)
    {
        cout<<"b = "<<b<<" k="<<k<<endl ;
        while(k+b<n  && arr[k+b]<=x)
        k+=b ;
    }
    if(arr[k]==x)
    cout<<"found"<<endl ;
    else
    cout<<"not found"<<endl ;

}