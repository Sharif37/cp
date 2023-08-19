#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define N  200000 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))

void segmentTree(ll arr[],ll tree[],ll l,ll r,ll node)
{
    if(l==r)
    {
        tree[node]=arr[l];
        return ;
    }
    ll mid=(l+r)/2 ;
    segmentTree(arr,tree,l,mid,2*node);
    segmentTree(arr,tree,mid+1,r,2*node+1);
    tree[node]=tree[2*node]+tree[2*node+1];
}

void update(ll arr[],ll tree[],int l,int r ,int node,int idx,int val)
{
    if(l==r)
    {
        arr[idx]=val ;
        tree[node]=val ;
        return ;
    }
    int mid=(l+r)/2 ;
    if(idx>mid) // go right
    {
        update(arr,tree,mid+1,r,2*node+1,idx,val);
    }
    else // go left
    {
        update(arr,tree,l,mid,2*node,idx,val);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
}

ll query(ll node,ll tree[],ll l,ll r,ll a,ll b)
{
    if(l>b || r<a)
    {
        return 0 ;
    }

    if(l>=a && r<=b)
        return tree[node];
    ll mid=(l+r)/2 ;
    ll q1=query(2*node,tree,l,mid,a,b);
    ll q2=query(2*node+1,tree,mid+1,r,a,b);
    return q1+q2;
}

int main() {
   ll n, q;
   cin >> n >> q;
 ll *tree=new ll[4*n];
 ll *arr=new ll[n+1];
   for(int i=1 ; i<=n ; i++)
   {
     cin >> arr[i];
   }
   segmentTree(arr,tree,1,n,1);
   for(int i=0 ; i<q ; i++)
   {
        ll  c,a, b;
        
        cin >>c>>a >> b;
        if(c==1)
        update(arr,tree,1,n,1,a,b);
        else
        cout << query(1,tree,1,n,a,b) << endl;
        
   }
   delete[] tree ;
   delete[] arr ;

  
   
//    for(int i=1;i<2*n ;i++)
//    cout<<tree[i]<<" ";

//    update(arr,0,n-1,1,3,10);
//    cout<<endl ;

//    for(int i=1;i<2*n ;i++)
//    cout<<tree[i]<<" ";
}
