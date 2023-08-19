#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    ll n,m,k ;
    cin>>n>>m>>k ;
    ll c[n],a[m];
    for(int i=0 ;i<n ;i++)
    {
        cin>>c[i];
    }
    for(int i=0 ;i<m ;i++)
    {
        cin>>a[i] ;
    }
    int cnt=0 ;
    sort(a,a+m);
    sort(c,c+n);

    for(int i=0 ,j=0;i<n && j<m ;)
    {
        if(abs(c[i]-a[j])<=k)
        {
            cnt++ ;
            i++ ;
            j++ ;
        }
        else
        {
            if(c[i]-a[j]>k)
            {
                j++ ;
            }
            else
            {
                i++ ;
            }
        }
    }

    
    cout<<cnt<<endl ;
    
    


}