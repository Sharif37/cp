#include<bits/stdc++.h>
using namespace std ;
int main()
{


int n ,Q ;
cin>>n>>Q ;
int arr[n];
queue<int>q ;

for(int i=0 ;i<n ;i++)
{
    cin>>arr[i];
}
int end_p=n-1 ;
int count_m=0 ;

while(Q--)
{
    int curr_m ;
    cin>>curr_m ;
    int ans ;
    for(;count_m<curr_m;count_m++)
    {
        if(end_p>=0 && (q.empty() || (arr[end_p]>q.front())))
        {
            ans=arr[end_p];
            end_p-- ;
        }
        else
        {
            ans=q.front();
            q.pop();

        }
        q.push(ans/2);
    }

    cout<<ans<<endl ;
}





return 0;
}