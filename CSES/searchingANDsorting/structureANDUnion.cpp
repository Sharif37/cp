#include<bits/stdc++.h>
using namespace std;
#define ll long long 
typedef int t ;

// typedef struct student{
//     int id ;
//     char name[20];
//     float salary ;
//     struct date{
//         char dayName[10];
//         int  month ;
//         int year ;
//     }date;

// } stu;

// struct car
// {
//     char name[10];
//     int id;
//     float price ;
    

// };

// void fun(struct car *car1)
// {
   
//    car1->id=5 ;
//    cout<<"In function car_Id:"<<car1->id<<endl ;
   
// }

struct car
{
    char name[10];
    int id;
    float price ;
    

};

union lab{
    int id ;
    char name[10];
};



int main() {
   
//  struct car car1 ;
//   strcpy(car1.name,"motorola");
//   car1.id=1 ;
//   car1.price=1e5 ;
//   cout<<"before function  call car_Id:"<<car1.id<<endl ;
//   fun(&car1);
//   cout<<"after  function call car_Id:"<<car1.id<<endl ;



// struct car car1,car2 ;
 printf("%ld",sizeof(car));
//    stu s[100] ;
//    s[0].date.dayName="monday";
//    s[0].date.month=7;

//    s[0].id=1 ;
//    strcpy(s[0].name,"hello");

   
//    a.id=1;
//    strcpy(a.name,"hello");
//    a.salary=23.5 ;

//    b.id=2 ;
//    strcpy(b.name,"world");
//    b.salary=21.6 ;

   //printf("%d \n %s \n %f ",s[0].id,s[0].name,s[0].salary);
    
}