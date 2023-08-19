#include<bits/stdc++.h>
using namespace std;
#define ll long long 



void fun()
{
   static int  a=2 ;//heap memory 
          int  b=3 ;
    a++ ;
    b++ ;
    printf("%d %d ",a,b);
}

//2,4,1,8

void  swapnew(int *a,int * b) ;

void print(int arr[],int size)
{
    for(int i=0 ;i<size ;i++)
    printf("%d ", arr[i]) ;

    //arr[2]=10000 ;
}

int sum(int n)
{
    // base criteria ( to finish the program )
    if(n==1)
    return 1 ;
    return n*sum(n-1) ;

}

int main() {

//   int a=7,b=9 ;
//   printf("before function call : a=%d b=%d \n",a,b);
//   swapnew(&a,&b);
  
//   printf(" after function call: a=%d b=%d \n",a,b);

// fun();
// fun();

// int n ;
// scanf("%d",&n);
// int arr[n] ;

// for(int i=0 ;i<n ;i++)
// {
//     scanf("%d",&arr[i]);
// }
// //arr[0]=90 ;

// //print(arr,n) ;

// for(int i=1 ;i<=n ;i++)
// printf("%d ", arr[i]) ;

  

    
// }

// void  swapnew(int *a,int * b)
// {
    
//     int temp=*a ;
//     *a= *b ;
//     *b=temp ;
//     printf("In function area:  a=%d b=%d \n",*a,*b);



printf("%d ",sum(5));

  
}