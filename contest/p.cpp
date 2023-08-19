#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int sum(int a=0,int b=0,int c=0)
{
    return a+b+c ;
}

class  area{
    public: 
    int length,width ;
    area(int length,int width)//parameterised constructor 
    {
        this->length=length ;
        this->width=width ;
    }
    area (area &others)//copy constructor //address of a1 
    {
        length=others.length ;
        width=others.width ;
    }

};

int main() {

    //default argument 
    //copy constructor
   area a1(2,3) ;//parameterized constructor
   area a2(a1); //call copy constructor 
   cout<<a2.length<<endl ;

   sum(1,2,3);

    
}