#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n ; 
        cin>>n ;
        int cnt=0 ;
        for(int i=0 ;i<n ;i++){
        int a,b ;
        cin>>a>>b ;
        if(a>b)
        cnt++ ;
        }

        cout<<cnt<<endl ;

    }

    return 0;
}