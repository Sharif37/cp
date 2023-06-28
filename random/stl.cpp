#include<bits/stdc++.h>
using namespace std ;
struct node{
   int a;
};

bool compare(node f,node s)
{
        return f.a>s.a ;
}


int main()
{
string s="kazi omar sharif";

//cout<<s.find("t")<<endl;

// string star;
// star.append("kazi");
// star+=" omar" ;

// string s1(s,0,4);
// string s2=s.substr(0,4);
// if(s1.compare(s2)==0)
// {
//     cout<<"both string are same."<<endl ;
// }
// cout<<s2<<endl ;

// unordered_map<string,int>m ;

// m.insert({"azi",0});
// m.insert({"kazi",8});
// m.insert({"kazi",1});
// m.insert({"omar",2});
// m.insert({"sharif",3});
// m.insert({"azi",0});
// m.insert({"kazi",8});
// m.insert({"kazi",1});
// m.insert({"omar",2});
// m.insert({"sharif",3});
// m.insert({"a",0});
// m.insert({"b",8});
// m.insert({"c",1});
// m.insert({"d",2});
// m.insert({"e",3});


// unordered_map<string ,int>::iterator it ;
// for(it=m.begin();it!=m.end();it++)
// {
//     cout<<it->first<<" "<<it->second<<endl ;
// }



//vector<node>v(10) ;
vector<int>v ;
int n ;
cin>>n ;
for(int i=0 ;i<n ;i++)
{
   
    int num=rand()/1e5;
    
    //v[i].a=num;
    v.push_back(num); 
   
}

// for(auto u: v)
// {
//     cout<<u<<" " ;
// }
cout<<endl ;
sort(v.begin(),v.end());
for(auto u: v)
{
    cout<<u<<" " ;
}
cout<<endl ;
cout<<binary_search(v.begin(),v.end(),18042)<<endl ;

int l=lower_bound(v.begin(),v.end(),18042)-v.begin();

/*lower bound give search element index ,
 if not found 
given imediate higher number index*/
int r=upper_bound(v.begin(),v.end(),18042)-v.begin();

/*if we search for a number in upper_bound 
it will give next pointer of given number 
(found or not found no matter)*/

cout<<l+1<<endl ;
cout<<r+1<<endl ;









return 0;
}