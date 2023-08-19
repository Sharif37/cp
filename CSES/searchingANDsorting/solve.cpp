#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
int vis[100010] ;
vector<int>adj[100010];
int cnt=0 ;
void  dfs(int src)
{
  vis[src]=1 ;
   cnt++ ;
  for(auto u:adj[src])
  {
    if(!vis[u])
    {
      dfs(u);
    }
  }
}


int main() {
    int t;
    cin >> t;

    while (t--) {
     int n ;
     cin>>n ;
    ll a[n+1],b[n+1];
    for(int i=1 ;i<=n ;i++)
    {
      cin>>a[i] ;
    }
    for(int i=1 ;i<=n ;i++)
    {
      cin>>b[i] ;
    }
    for(int i=1 ;i<=n ;i++)
    {
      for(int j=1 ;j<=n ;j++)
      {
        if( (a[i]-b[j]) >= 0 && i!=j)
          adj[i].push_back(j);
      }
    }
    // for(int i=1 ;i<=n ;i++){
    // cout<<i<<":" ;
    // for(auto u: adj[i]){
    // cout<<u<<" " ;
    // }
    // cout<<endl ;
    // }
       vector<int>ans ;
    for(int i=1 ;i<=n ;i++)
    {
      if(adj[i].size()==n-1)
      ans.push_back(i);
    }
    //cout<<adj[4].size()<<endl ;

   cout<<ans.size()  <<endl ;
   for(auto u: ans)   
   cout<<u<<" "  ;
   cout<<endl ;
}
}