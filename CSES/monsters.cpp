#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
int dx[]={1,-1,0,0} ;
int dy[]={0,0,1,-1} ;
int vis[1000][1000] ;
char grid[1000][1000];
 
 vector<pair<int,int>>v;
 int flag=0 ;
 void path()
 {
    string s="" ;
    for(int i=0 ;i<v.size()-1;i++)
        {
            if(v[i].first== v[i+1].first &&  v[i].second<v[i+1].second)
            {
               s+='R';
            }
            else if(v[i].first== v[i+1].first &&  v[i].second>v[i+1].second)
            {
                s+='L' ;
            }
            else if(v[i].first> v[i+1].first &&  v[i].second==v[i+1].second)
            {
                s+='U' ;
            }
            else
            {
                s+='D' ;
            }
        }
        cout<<s<<endl ;
        flag=1 ;
        
       
 }
void dfs(int row,int col,int n,int m)
{
     
     if(vis[row][col])
     return ;


        if(vis[row][col] && grid[row][col]=='M')
     {
        cout<<"NO"<<endl ;
        return ;
     }
     if(row == 0 || row == n-1 || col == 0 || col == m-1)
     {
        cout<<"YES"<<endl ;
        cout<<v.size()-1<<endl ;
        path();
        exit(0) ;
     }
     vis[row][col]=1 ;
     v.push_back({row,col});
     //cout<<row<<" "<<col<<endl ;
     
     for(int i=0 ;i<4 ;i++)
     {
        int nx=row+dx[i];
        int ny=col+dy[i];
        if( nx<0 || nx>=n || ny<0 || ny>=m  || grid[nx][ny]!='#')
         continue ;
         else
         dfs(nx,ny,n,m);
     }

 
}




int main() {
    int n,m ;
    cin>>n>>m ;
   
    int x=0,y=0 ;
    for(int i=0 ;i<n ;i++)
    {
        for(int j=0 ;j<m ;j++)
        {
            cin>>grid[i][j] ;
            if(grid[i][j]=='A')
            {
                x=i ;
                y=j ;
            }
        }
    }

     //cout<<x<<" "<<y<<endl ;
     dfs(x,y,n,m) ;
     if(!flag)
     cout<<"NO"<<endl ;

     /*5 8
########
#M..A..#
#.#.M###
#M#..#..
#.######*/

/*8 8
########
#.....A#
#.######
#......#
#.####.#
#....#.#
#.##.#.#
#..M.#.#*/





}