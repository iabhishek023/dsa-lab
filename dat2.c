#include<stdio.h>
int main(){
     int dat[]={0},a[100],i,j,size,max=0;
     printf("Enter the size of the array");
     scanf("%d",&size);
     printf("Enter the no.");
     for(i=0;i<size;i++){
         scanf("%d",&a[i]);
     }
     for(i=0;i<size;i++){
         printf("%d",a[i]);
     }printf("\n");
     max=a[0];
     for(i=0;i<size;i++){
         if(a[i]>max){
             max=a[i];
         }
     }
     printf("The maximum among the all is %d\n",max);
     for(i=0;i<size;i++){
         dat[a[i]]++;
     }
     for(i=0;i<=max;i++){
         printf("%d ",dat[i]);
     }printf("\n");
     for(i=0;i<=max;i++){
         printf("%d is being printed %d times\n",i,dat[i]);
     }
     return 0;
}