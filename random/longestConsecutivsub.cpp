#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {

    int arr[10]={1,2,3,4,6,15,9,8,7,10};
    map<int,bool>m ;
    for(auto u:arr)
    m[u]=true ;
    int len=0 ;
    int mx=0 ;
    int end=0 ;
    for(int i=1;i<=m.size();i++)
    {
        if(m.find(i)!=m.end() && m[i]==true)
        {
            len++ ;
            m[i]=false ;
            mx=max(mx,len);
        }
        else
        {
            len=0 ;
            
        }
       
    }
    cout<<mx<<endl ;

    
}