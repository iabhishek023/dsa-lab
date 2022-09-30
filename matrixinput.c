#include<stdio.h>
int main(){
     int a[100][100],i,j,r,c;
     printf("enter the no. of rows and columns");
     scanf("%d%d",&r,&c);
     printf("\n");
     printf("The no. of rows are %d and columns are %d\n",r,c);
     printf("enter the no.");
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
             scanf("%d",&a[i][j]);
         }
     }
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
         }
         printf("\n");
     }


     return 0;
}