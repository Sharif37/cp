#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    int n ;
    cin>>n ;
    int arr[n];
    set<int>st ;
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i] ;
        st.insert(arr[i]);
    }
    cout<<st.size()<<endl ;
}

