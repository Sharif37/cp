#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t ;
    cin>>t ;
    while(t--)
    {

        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        set<string>st ;
        for(int i=1 ;i<n ;i++)
        {
            string a="" ;
            a+=s[i-1];
            a+=s[i] ;
            st.insert(a);
        }

        cout<<st.size()<<endl ;

        
    }


    return 0;
}