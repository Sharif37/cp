#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n,k ;
    cin>>n>>k ;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0,e=n-1 ;
    int cnt=0 ;
    while(s<e)
    {
        
        if(arr[s]+arr[e]<=k)
        {
            cnt++ ;
            s++ ;
            e-- ;
        }
        else if ((arr[s]+arr[e])>k)
        {
            e-- ;
        }
    
        
    }

    cout<<n-cnt<<endl ;

}