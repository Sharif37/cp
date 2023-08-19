#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n ;
    cin>>n ;
    vector<pair<int,int>>v ;
    for(int i=0 ;i<n ;i++)
    {
        int a,b ;
        cin>>a>>b ;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,-1));

    }
    int cnt=0 ;

    sort(v.begin(),v.end());
    int act=0 ;
    int mx=0 ;
    for(int i=0 ;i<v.size() ;i++)
    {
      act+=v[i].second ;
      mx=max(mx,act);
        
    }
    cout<<mx<<endl ;

    





}