#include<bits/stdc++.h>
using namespace std ;
int printNumber(int n,int c=0)
{
    if(n<=0)
    return 0 ;
    
    return c=printNumber(n/10)+1;
    

}
int main()
{

int n ;
cin>>n ;
cout<<printNumber(n)<<endl;
//printNumber(n) ;


return 0;
}