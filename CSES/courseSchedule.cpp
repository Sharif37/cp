#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100010
int flag;
vector<int> vis(N, 0);
vector<int> adj[N];
vector<int> ans;
int cycle = 0;
void dfs(int src)
{
    vis[src] = 1;
    if (cycle == 1)
        return;

    for (auto u : adj[src])
    {
        if (vis[u] == 1)
        {
            cycle = 1;
            return;
        }
        else if (vis[u] == 0)
        {
            dfs(u);
        }
    }
    vis[src] = 2;
    ans.push_back(src);
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    cycle = 0;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && cycle == 0)
            dfs(i);
        if (cycle)
        {
            flag = 1;
        }
    }

    if (flag == 1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        ans.clear();
        vis.assign(N, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }

        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << " ";
    }
}

/*6 6
1 2
1 3
2 4
3 5
5 6
6 3*/