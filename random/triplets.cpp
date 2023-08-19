#include<bits/stdc++.h>
using namespace std ;
void naiveApproch(int arr[],int target,int n)
{
    int cnt=0 ;
     for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl;
                         cnt++ ; 
                }
            }
        }
    }
    cout<<"count = "<<cnt<<endl ;
}

void usingHash(int arr[],int target,int n)
{
// 1
// 7
// 1 2 3 4 5 6 7 
// 12
    
    int cnt=0 ;
    for(int i=0 ;i<n-2 ;i++)
    {
        unordered_set<int>s ;

        for(int j=i+1 ;j<n ;j++)
        {
            int x=target-(arr[i]+arr[j]);
            if(s.find(x)!=s.end())
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<x<<endl ;
                cnt++ ;
            }
            else
            {
                s.insert(arr[j]) ;
            }
        }
    }
    cout<<"count = "<<cnt<<endl ;
}

int main()
{
int t ;
cin>>t ;
while(t--)
{
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    int target ;
    cin>>target ;
    int count=0 ;

   naiveApproch(arr,target,n);
   usingHash(arr,target,n) ;
    

   
    
}







return 0;
}