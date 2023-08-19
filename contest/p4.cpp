#include<bits/stdc++.h>
using namespace std;
#define N 200000
bool vis[N];
vector<int>adj[N]; 

bool dfs(int src,int p)
{
    
    vis[src]=true ;
    for(int i=0 ;i<adj[src].size();i++)
    {
        int u=adj[src][i] ;
        
        if(!vis[u])
        {
            dfs(u,src);
        }
        else if(vis[u] && u!=p)
        {
            return true ;
        
        }
    }
    return false ;
}



int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin>>n ;
        for(int i=1 ;i<=n;i++)
        {
            int a ;
            cin>>a ;
            adj[i].push_back(a);
            adj[a].push_back(i);
        }

        // for(int i=1;i<=n ;i++)
        // {
        //     cout<<i<<" :" ;
        //   for(auto u: adj[i])
        //   {
        //     cout<<u<<" " ;
        //   }
        //   cout<<endl ;
        // }
        int cnt=0 ;
        int cycle=0 ;
        
        for(int i=1 ;i<=n ;i++)
        {
            if(!vis[i])
            {
                cnt++ ;
                
                if(dfs(i,-1)){
                cycle++ ;
                }
            }
            
        }


        cout<<"count= "<<cnt<<"cycle= "<<cycle<<endl ;
        memset(vis,0,N);
        for(int i=1 ;i<=n ;i++)
        adj[i].clear(); 
        
        
    
        

    }
    return 0;
}