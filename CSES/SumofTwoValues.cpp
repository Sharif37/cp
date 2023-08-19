#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n,k ;
    cin>>n>>k ;
    int arr[n];
    map<int,int>m ;
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
        m.insert({arr[i],i});
    }
    
    // int s=0,e=n-1 ;
    // sort(arr,arr+n);
    // int flag=0 ;
    // while(s<=e)
    // {
        
    //     if(arr[s]+arr[e]==k)
    //     {
    //         flag=1 ;
    //         cout<<s+1<<" "<<e+1<<endl ;
    //         break ;
    //     }
    //     else if ((arr[s]+arr[e])>k)
    //     {
    //         e-- ;
    //     }
    //     else
    //     {
    //         s++ ;
    //     }
        
    // }

    // if(flag==0)
    // cout<<"IMPOSSIBLE"<<endl ;
    int flag=0 ;
   for(int i=0 ;i<n ;i++)
   {
      int s=k-arr[i];
      if(m.find(s)!=m.end() && i!=m[s])
      {
        cout<<i+1<<" "<<m[s]+1<<endl ;
        flag=1 ;
        break ;
      }
   }
   if(flag==0)
   cout<<"IMPOSSIBLE"<<endl ;



}