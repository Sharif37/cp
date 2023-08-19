#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
#define Max_n 200005 
int BIT[Max_n] ;
int arr[Max_n] ;
unordered_map<int,int>freqency ;
int last_occurrence[1000005];
void update(int idx,int val)
{
    while(idx< Max_n)
    {
        BIT[idx]+=val ;
        //cout<<idx<<"->"<<val<<endl ;
        idx+= (idx & (-idx)) ;
        
    }
}

int query(int idx)
{
 int res=0 ;
 while(idx>0)
 {
    res+=BIT[idx];
    idx-=(idx & (-idx));
 }
 return res ;
}

int getdistinctNumber(int a,int b)
{
    return query(b)-query(a-1);
}


int main() {
    int n,q ;
    cin>>n>>q ;
    for(int i=1 ;i<=n ;i++)
    {
      cin>>arr[i];
      
    }

    memset(last_occurrence, -1, sizeof(last_occurrence));

    for (int i = 1; i <= n; i++)
    {
        if (last_occurrence[arr[i]] != -1)
        {
            update(last_occurrence[arr[i]], -1); // Remove the previous occurrence of the element
        }
        update(i, 1); // Add the current occurrence of the element
        last_occurrence[arr[i]] = i;
    }

    for(int i=0 ;i<q ;i++)
    {
        int a,b ;
        cin>>a>>b ;
        cout<<getdistinctNumber(a,b)<<endl ;
    }
    
}