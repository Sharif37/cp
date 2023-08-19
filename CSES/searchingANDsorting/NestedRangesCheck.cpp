#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))

struct node
{
    int a,b ;
}v[200000] ;
bool compare(node a,node b)
{
    if(a.a>b.a)
    return true ;
    return false ;
}



int main() {
    int n ;
    cin>>n ;
    
    for(int i=0 ;i<n ;i++)
    {
        int a,b ;
        cin>>a>>b ;
        v[i]={a,b};
        

    }
    // sort(v,v+n,compare);
    // for(int i=0 ;i<n ;i++)
    // cout<<v[i].a<<" "<<v[i].b<<endl ;
    //1 6
    //2 4
    sort(v,v+n);
    int cnt=n ;
    for(int i=0 ;i<n ;i++)
    {
        if(v[i+1].a >= v[i].b)
        {
            cnt-- ;
        }
    }
    cout<<cnt ;

    
    

    
}