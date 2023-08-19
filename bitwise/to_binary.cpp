#include<bits/stdc++.h>
using namespace std;
#define ll long long 
string  to_binary(int x)
{
    string s ;
    while(x>0)
    {
        s+=x%2 ? '1' : '0' ;
        x/=2 ;
    }
    reverse(s.begin(),s.end());
    return s ;
}

void bitmask(int n,int s,int arr[])
{
    for(int mask=0 ;mask<(1<<n);mask++)
    {
    ll sum_of_this_subset=0 ;
    ll rev=0 ;
        for(int i=0 ;i<n ;i++)
        {
            if(mask & 1<<i)
            {
                //cout<<(mask & 1<<i)<<" "/* <<to_binary(mask & 1<<i)<<" " */;
                sum_of_this_subset+=arr[i] ;
               
            }
            else
            {
                sum_of_this_subset-=arr[i] ;
            }
            
            
        }

        if(sum_of_this_subset%360==0)
        {
            cout<<"YES"<<endl ;
            return ;
        }
       
    
    }

    
        cout<<"NO"<<endl ;
    
}


void cfB(int n,int l,int r,int d,int arr[])
{
     int cnt=0 ;
    for(int mask=0 ;mask<(1<<n);mask++)
    {
       int sum=0 ;
        int mx=0 ;
    vector<int>v ;
    int mn=INT_MAX ;
        for(int i=0 ;i<n ;i++)
        {
            if(mask & 1<<i)
            {
               
                mx=max(mx,arr[i]) ;
                mn=min(mn,arr[i]) ;
               v.push_back(arr[i]);

               
            }


        }

        if(v.size()>=2){
            for(auto u:v)
            sum+=u ;

            if(l<=sum  && sum <= r )
               {
                
                if(mx-mn>=d)
                {
                    cnt++ ;
                }
               }
        }
            
    }

    
        cout<<cnt<<endl ;
    
}

void bset(int x)
{
    cout<<__builtin_popcount(x)<<endl;
}

int main() {

//int a,b;
    
//     while(cin>>a>>b && a!=-1)
//    {
//     cout<<"x = "<<a<<" "<<"y = "<<b<<endl ;
//     cout<<"x = "<<to_binary(a)<<" "<<"y = "<<to_binary(b)<<endl ;

//     cout<<"x | y : "<< (a|b)<<endl;
//     cout<<"x & y : "<< (a&b) << endl ;
//     cout<<"x ^ y : "<< (a^b) << endl ;
//     int s=1<<16;
//     cout<<s<<endl ;



  // }

//   for(int i=0 ;i<32 ;i++)
//   cout<<to_binary(i)<<endl; 


//find  all possible subset  of number <15  dataset 


//   int n ,l,r,d;
//   cin>>n>>l>>r>>d ;
//   int arr[n] ;
//   for(int i=0 ;i<n ;i++)
//   cin>>arr[i];
 // bitmask(n,0,arr) ;
 //cfB(n,l,r,d,arr);




//minimum bit change to get equal bit of two number .
// int x ;
int a,b ;
cin>>a>>b ;
cout<<"a="<<to_binary(a)<<"\n"<<"b="<<to_binary(b)<<endl ;
// x=a^b ;
// //cin>>x ;

//  bset(x) ;


 //remove last set bit of number n&(n-1)

//  cout<<to_binary(a&b)<<endl ;

//     //swaping 

//     a=a^b ; //5^6
//     b=a^b; //6^5^6
//     a=a^b ; //5^6^5

  //cout<<"a="<<to_binary(a)<<"\n"<<"b="<<to_binary(b)<<endl ;

//masking 
// for(int i=0 ;i<8 ;i++)
// cout<<(a&(1<<i))<<" " ;




}