#include<bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin>>t  ;
    while(t--)
    {
        int n ,k ;
        cin>>n>>k ;
        int p[n],b[n];
        vector<pair<int,int>>m ;
      
        for(int i=0 ;i<n ;i++)
        {
            cin>>p[i];
            m.push_back({p[i],i});

        }
        for(int i=0 ;i<n ;i++)
        {
            cin>>b[i];
        }
      sort(m.begin(),m.end()) ;

      sort(b,b+n);
      int ans[n] ;
      for(int i=0 ;i<n ;i++)
        {
          ans[m[i].second]=b[i];
        }
      
      for(int i=0 ;i<n ;i++)
      {
        cout<<ans[i]<<" ";
      }
      cout<<endl ;


    }






    return 0;
}