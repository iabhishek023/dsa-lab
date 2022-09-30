#include<stdio.h>
int main(){
     int a[100][100],b[100][100],i,j,r1,c1;
     printf("enter the no. of rows and columns");
     scanf("%d%d",&r1,&c1);
     printf("\n");
     printf("The no. of rows are %d and columns are %d\n",r1,c1);
     printf("enter the no.");
     for(i=0;i<r1;i++){
         for(j=0;j<c1;j++){
             scanf("%d",&a[i][j]);
         }
     }
     for(i=0;i<r1;i++){
         for(j=0;j<c1;j++){
            printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
     for(i=0;i<r1;i++){
         for(j=0;j<c1;j++){
            b[j][i]=a[i][j];
            printf("%d\t",b[j][i]);
         }
         printf("\n");
     }

     return 0;
}