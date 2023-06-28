#include<bits/stdc++.h>
using namespace std ;
int Maxsum(int arr[],int n)
{
    
    int end=0 ;
    int max=0 ;
    int currentMax=0 ;
   for(int i=0 ;i<n ;i++)
   {

    currentMax+=arr[end];
    if(currentMax > max)
    {
     max=currentMax ;
    }
    if(currentMax<0)
    {
        currentMax=0 ;
       
    }
    end++ ;

   }
return max ;
}
int main()
{

int n ;
cin>>n ;
int arr[n];
for(int i=0 ;i<n ;i++)
{
    cin>>arr[i];
}
cout<<Maxsum(arr,n)<<endl;


return 0;
}