#include<stdio.h>
int main(){
     int a[10];
     int x,i;
     printf("enter the no. in array");
     for(i=0;i<10;i++){
         scanf("%d\n",&a[i]);
     }
     for(i=0;i<10;i++){
         printf("%d\t",a[i]);
     }
     printf("enter the no. to be deleted");
     scanf("%d",&x);
     printf("%d",x);
     for(i=0;i<10;i++){
         if (a[i]==x)
         continue;
         else
         printf("%d",a[i]);
     }

     return 0;
}