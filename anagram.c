#include<stdio.h>
int main(){
     char a[]={'a','c','t','i','o','n'};
     char b[]={'c','a','t','i','o','n'};
     int data[26]={0},i,datb[26]={0};
     puts(a);
     printf("\n");
     puts(b);
     printf("\n");
     
     for(i=0;i<6;i++){
         data[a[i]]++;
     }
     for(i=0;i<6;i++){
         data[b[i]]++;
     }
     return 0;
}