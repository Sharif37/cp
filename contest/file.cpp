#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    FILE *fp;
    fp=fopen("input.txt","w");
    
    if(fp==NULL)
    {
        printf("file not found");
    }
    fprintf(fp,"codingeatsleep");

    fclose(fp);
    fp=fopen("input.txt","rb");
    fseek(fp,2,0);
     printf("%c\n",fgetc(fp));
    fseek(fp,3,1);//0->seek_set 1->seek_cur 2->seek_end
    printf("%c\n",fgetc(fp));
    fseek(fp,-5,2);
     printf("%c\n",fgetc(fp));

    




}