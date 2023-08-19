#include<bits/stdc++.h>

using namespace std;

// 1 2 3 4 5
// 3 4 5 1 2 
void rotateArray(int arr[],int n,int k)
{
    for(int i=0 ;i<n ;i++)
    {
       cout<<arr[(i+k)%n]<<" " ;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int arr[n];
        for(int i=0 ;i<n ;i++)
        {
            cin>>arr[i];
        }
        int k ;
        cout<<"k: "<<endl ;
        cin>>k ;
        rotateArray(arr,n,k);
        
    }
    return 0;
}