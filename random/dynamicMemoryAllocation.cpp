#include<bits/stdc++.h>
using namespace std ;
#define N 1000000000
int main()
{

int n ,m; cin>>n>>m;
//int array[N];


int **arr=new int* [n];

for(int i=0 ;i<n;i++)
{
    arr[i]=new int[m];

     for(int j=0 ;j<m ;j++)
     {
        arr[i][j]=j;
     }

}

for(int i=0 ;i<n ;i++)
{
    cout<<arr[i]<<":" ;
    for(int j=0 ;j<m ;j++)
    {
         cout<<arr[i][j]<<" " ;
    }
    cout<<endl ;
}
//for(int i=0 ;i<n ;i++)
//delete[]  arr;

for(int i=0 ;i<n ;i++)
delete arr[i];

delete[] arr ;


return 0;
}