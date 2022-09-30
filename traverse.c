#include<stdio.h>
int main(){
     int a[5],i;
     for (i=0;i<5;i++){
         printf("enter a no.");
         scanf("%d",&a[i]);
     }
     for (i=0;i<5;i++){
         
         printf("%d\n",a[i]);
     }

     return 0;
}