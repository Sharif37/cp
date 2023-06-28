#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	
	int t ;
	cin>>t ;
	while(t--)
	{
	    int n,k ;
	    cin>>n>>k ;
	    int A[n];
        int size=n ;
	    for(int i=0;i<n ;i++)
	    {
	        cin>>A[i];
	    }
	    int * arr=new int[2*n];
        if(k>1)
        n=n<<1 ;
        // cout<<n<<endl ;
	    for(ll i=0 ;i<n ;i++)
	    {
	        
	            *(arr+i)=A[i%size];
	        
	    }
	    ll currentMax=0 ;
	    ll max=LONG_MIN;
	    int end=0 ;

	  for(int i=0 ;i<n;i++)
	  {
	      currentMax+=*(arr+i);
	      if(currentMax>max)
	      {
	          max=currentMax ;
	      }
	      
	      if(currentMax<0)
	      {
	          currentMax=0 ;
	      }
	      
	  }
	  ll totalSum=0 ;
	  for(int i=0 ;i<size;i++)
      {
        totalSum+=A[i];
      }
       ll ans=0 ;
      if(totalSum>0 && k>1)
      {
         ans=max+(k-2)*totalSum ;
      }else
      {
        ans=max ;
      }
	    
	cout<<ans<<endl ;
	}
	return 0;
}
