#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10); cout.setf(ios::fixed);
    int t;
    cin >> t;

    while (t--) {
        int n,d,h ;
        cin>>n>>d>>h ;
        int arr[n+1];
       
        
        
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i];
            
        }

      
          long  double totalArea= (long double)d*h /2.0 ;
       
        for(int i=0 ;i<n-1;i++)
        {
            int first=arr[i];
            int second=arr[i+1];
            if(second-first >=h)
            {
                
                totalArea+=(long double)d*h/2.0 ;
            }
            else{
                
                long double  b=(long double) d*(first+h-second)/h ;
                long double  h1=second-first ;
                totalArea+=(b+d)/2.0*h1 ;
            }
        }
       cout<<totalArea<<endl ;
        
    }

    return 0;
}