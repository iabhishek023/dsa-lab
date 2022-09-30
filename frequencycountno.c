#include<stdio.h>
int main(){
     int A[]={1,4,2,3,4,7,5,6,3,5,8,9,8,7,9};
     int max=A[0];
     int dat[10]={0};
     int i;
     for(i=1;i<=15;i++){
         if(A[i]>max){
             max=A[i];
         }
     }
     for(i=0;i<=14;i++)
        dat[A[i]]++;
    for(i=1;i<=max;i++){
        if(dat[i]>1){}
    }

     return 0;
}