#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pll pair<int,int>

struct node{
    pair<ll,ll>p ;

};

bool cmp(node a, node b) {
    if (a.p.first > b.p.first) {
        return true; // a has more points
    } else if (a.p.first == b.p.first && a.p.second < b.p.second) {
        return true; // a and b have equal points, but a has a lower penalty
    }
    return false;
}


int main() {
    int t;
    cin >> t;
      
    while (t--) 
    {
        int n,m,h ;
        cin>>n>>m>>h ;
        set<pair<int,int>>st ;
        vector<node>v ;
         
         pair<ll,ll>pq;
        for(int i=0 ;i<n ;i++)
        {

            ll arr[m];
            for(int i=0 ;i<m ;i++)
            cin>>arr[i] ;

            sort(arr,arr+m) ;
            ll time=0 ;
            ll k=0 ;
            ll step=m ;
            ll cnt=0 ;
            ll penalty=0 ;
            while(step--)
            {
                
                time+=arr[k];
                if(time>h)
                break ;
                penalty+=time ;
                cnt++ ;
                
                k++ ;
                
                
            }
            if(i==0)
            {
                pq={cnt,penalty};
            }
            
            node temp ;
            temp.p=make_pair(cnt,penalty);
            v.push_back(temp);
            
       

         
        
        }
        
        sort(v.begin(),v.end(),cmp);
        for(int i=0 ;i<v.size();i++){
       //cout<<"->: "<<v[i].p.first<<" "<<v[i].p.second<<endl ;
         if(v[i].p==pq)
         {
            cout<<i+1<<endl ;
            break ;
         }

        }
           


        
        
       
        
        
    }

    return 0;
}