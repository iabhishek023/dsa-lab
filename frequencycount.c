#include<stdio.h>
int main(){
     char ab[]={'a','b','h','i','s','h','e','k'};
     int dat[26]={0},max,i;
     //printf("Enter the string\n");
     //gets (ab);
     printf("the string is\n");
     puts(ab);
     printf("\n");
    //  max=ab[0];
     
     for(i=0;i<8;i++){
        dat[ab[i]-'a']++;
     }
     for(i=0;i<=25;i++){
         if(dat[i]>=1){
           printf("%c",(char)(i+97));
           printf("%d\n",dat[i]);
         }
     }   
     return 0;
}