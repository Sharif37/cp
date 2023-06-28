#include<bits/stdc++.h>
using namespace std ;
#define  ll long long 

unordered_map<int,ll>fibocache ;
ll fibo(int n)
{
  if(n==0)
  return 0 ;
  else if(n==1 )
  return 1 ;

  else if(fibocache.find(n)!=fibocache.end())
  {
    return fibocache[n];
  }
  else{
     fibocache[n]=fibo(n-1)+fibo(n-2);
        return fibocache[n];
  }
}

int main()
{
int n ;
cin>>n ;



for(int i=0 ;i<=n ;i++)
{
    cout<<fibo(i)<<" ";
}






return 0;
}