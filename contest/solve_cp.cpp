#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int inf = 1e9+10;
const ll inf_ll = 1e18+10;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define cmax(x, y) (x = max(x, y))
#define cmin(x, y) (x = min(x, y))
vector<int>v ;
int * original=new int[inf] ;
stack<pair<char,pair<int ,int >>>lg ;
int main() {
    int t;
    cin >> t;

    while (t--) {
        char c ;
        cin>>c ;
    int i=0 ;
    switch (c)
    {
    case '+':
        int a ;
        cin>>a ;
        v[i++]=a ;
         int j=i-1;
        original[j] ;
        lg.push({'+',{a,0}});
        break;
    case '-':
    int k ;
    cin>>k ;
    v.erase(v.begin()+i-k-1,v.end()+k-1);
    lg.push({'-',{i,i+k}});
    break ;
    case '!':
    if(lg.top().first=='+'){
    v.push_back(lg.top().second.first);
     lg.pop() ;
    }
     if(lg.top().first=='-')
    {
        int a=lg.top().second.first ;
        int b=lg.top().second.second ;
        for(int u=a ;u<=b ;u++)
        {
            v[i]=original[a] ;
            
        }

    }
    
   

    

    
    default:
        break;
    }


    }

    return 0;
}