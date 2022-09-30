#include<stdio.h>
int main(){
     int A[10];
     int k,i,j,temp;
     for (k=0;k<10;k++){
         printf("enter a no.");
         scanf("%d",&A[k]);
     }
     for (k=0;k<10;k++){
         
         printf("%d\n",A[k]);
     }
     i=0;
     j=9;
     while(i<j){
         temp=A[i];
         A[i]=A[j];
         A[j]=temp;
         i++;
         j--;
         }
     for(i=0;i<10;i++){
         printf("%d\n",A[i]);
     }

     return 0;
}