#include<bits/stdc++.h>
using namespace std ;
bool isArraySorted(int arr[],int n)
{
    if(n==0 || n==1)
    return true ;

    if(arr[0]>arr[1])
    {
        return false ;
    }
    return isArraySorted(arr+1,n-1);
    
}

int s=0 ;
int sum(int arr[],int n)
{
    if(n==0)
    return s;
    
    s+=arr[0];

    return sum(arr+1,n-1);

}

bool isNumberPresent(int arr[],int n ,int key)
{
    if(n==0)
    {
        return false ;
    }
    if(arr[0]==key)
    return true ;

    return isNumberPresent(arr+1,n-1,key);
}


int FirstOccurence(int arr[],int k,int n,int key)
{
    if(k==n)
    {
        return -1 ;
    }

    if(arr[0]==key)
    return k+1;
    return FirstOccurence(arr+1,k+1,n,key);

}

int in=0 ;
int LastOccurence(int arr[],int k,int n,int key)
{
    if(k==n)
    {
       if(in>0)
       {
        return in ;
       }
       else
       {
        return -1 ;
       }
    }

    if(arr[0]==key)
     {
         in=k+1 ;
     }
    return LastOccurence(arr+1,k+1,n,key);

}


vector<int>v ;
int ALLOccurence(int arr[],int k,int n,int key)
{
    if(k==n)
    {
       
       if(v.size()>0)
       return v.size();
       else
       return -1 ;
       
    }

    if(arr[0]==key)
     {
        v.push_back(k+1);
     }
    return ALLOccurence(arr+1,k+1,n,key);

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
/*
if(isArraySorted(arr,n))
{
    cout<<"sorted array."<<endl ;
}
else
{
    cout<<"array not sorted."<<endl ;
}
*/

//cout<<sum(arr,n)<<endl;

int key ;
printf("key: ");
cin>>key ;

/*
if(isNumberPresent(arr,n,key))
{
  cout<<"number present."<<endl ;
}
else
{
 cout<<"Number not present."<<endl ;
}*/

cout<<FirstOccurence(arr,0,n,key)<<endl;
cout<<LastOccurence(arr,0,n,key)<<endl ;
cout<<ALLOccurence(arr,0,n,key)<<endl ;

for(auto u: v)
cout<<u<<" ";


return 0;
}