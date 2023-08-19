#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
const int N=10010 ;
vector<ll>adj[N];
int vis[N] ;
int m=0 ;
void   dfs(int src)
{

    m++ ;
   vis[src]=1 ;
   for(auto u:adj[src])
   {
      if(!vis[u])
      {
        vis[u]=1 ;
        dfs(u);
      }

   }
   
}


int main() {
    ll n,e ,k ;
    cin>>n>>e>>k ;

    memset(vis,0,sizeof(vis));
    for(int i=0 ;i<e ;i++)
    {
        ll u,v ;
        cin>>u>>v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     ll cnt=1 ;
     vector<ll>v ;
    for(int i=1 ;i<=n ;i++){
        if(!vis[i])
        {
          
          
         dfs(i) ;  
         v.push_back(m);
         m=0 ;
        }
        
    }
    sort(v.begin(),v.end()) ;
    ll to=0 ;
    for(int i=v.size()-1 ;i>=0 ;i--)
    {
         to+=v[i] ;
        if(to<k)
        {
            cnt++ ;
        }

    }
    cout<<cnt<<endl ;
    

/*9 7 2
1 2
2 3
3 6
4 5
5 8
8 7
7 9
*/

    

}