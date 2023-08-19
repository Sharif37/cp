#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
#define N  2010 


int ks(int weight[],int values[],int c,int n)
{
   int dp[n+10][c+10] ;
   memset(dp,0,sizeof(dp));
   for(int i=1 ;i<=n ;i++)
   {
    for(int j=1 ;j<=c ;j++)
    {
        if(i==0 || j==0)
        {
            dp[i][j]=0 ;
        }else if(weight[i-1]>j)
        {
          dp[i][j]=dp[i-1][j];
        }
        else
        {
          dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i-1]]+values[i-1]);
        }
    }
   }

   
   

   return dp[n][c];
}

int main() {
    int c,objno ;
    cin>>c>>objno ;
    int weight[objno+10],values[objno+10];
    for (int i=0; i< objno; i++)
    {
        int  w,p;
        cin>>w>>p;
        weight[i]=w;
        values[i]=p;
    }
   cout<< ks(weight,values,c,objno)<<endl;
    
}