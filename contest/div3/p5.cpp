#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define N  1000000 
set<long long>nums ;

int main() {
    int t;
    cin >> t;

    long val=0;
        for(int j=2 ;j<=1000 ;j++){
            long long val=1+j ;
            long long p=j*j ;
        for(int i=2;i<=20 ;i++)
        {
             val+=p ;
            nums.insert(val);
  
             if(val>N)
             break ;

             p*=j ;

        }
        }

   
    while (t--) {
        
      int n ;
      cin>>n ;
      if(nums.count(n))
      {
        cout<<"YES"<<endl ;
      }
      else
      {
        cout<<"NO"<<endl ;
      }



    }

    return 0;
}