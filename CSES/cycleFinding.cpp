#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9 + 10;
const ll inf_ll = 1e18 + 10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
vector<int> vis(1000, 0);
vector<int> parent(1000, -1);
vector<int> adj[1000];
int cycle_start, cycle_end;
bool dfs(int src)
{

    vis[src] = 1;
    for (auto u : adj[src])
    {
        if (vis[u] == 0)
        {
            parent[u] = src;
            if (dfs(u))
            {
                return true;
            }
        }
        else if (vis[u] == 1)
        {
            cycle_start = u;
            cycle_end = src;
            return true;
        }
    }
    vis[src] = 2;
    return false;
}

bool cycle(int src)
{
    vis[src] = 1;
    for (auto u : adj[src])
    {
        if (!vis[u])
        {
            if (cycle(u))
                return 1;
        }
        else if (vis[u] == 1)
            return 1;
    }
    vis[src]=2 ;
    return 0 ;
}

int main()
{
    int node, edges;
    cin >> node >> edges;
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    
    int flag=0 ;
    for (int i = 1; i <= node; i++)
    {
        if (!vis[i] && dfs(i))
        {
            flag=1 ;
              if (flag){
        cout << "cycle found" << endl;
    cout << cycle_start << " " << cycle_end << endl;
    }
    
        }
    }
            if(!flag)
        cout << "cycle not found" << endl;
}
