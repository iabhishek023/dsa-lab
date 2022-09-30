#include<stdio.h>
int main(){
     int a[100][100],b[100][100],c[100][100],i,j,r1,c1,r2,c2;
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
     printf("enter the no. of 2nd rows and columns");
     scanf("%d%d",&r2,&c2);
     printf("\n");
     printf("The no. of rows are %d and columns are %d\n",r2,c2);
     printf("enter the no.");
     for(i=0;i<r2;i++){
         for(j=0;j<c2;j++){
             scanf("%d",&b[i][j]);
         }
     }
     for(i=0;i<r2;i++){
         for(j=0;j<c2;j++){
            printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
     if(r1==r2 && c1==c2){
         for(i=0;i<r1;i++){
             for(j=0;j<c1;j++){
                 c[i][j]=a[i][j]+b[i][j];
                 printf("%d\t",c[i][j]);
             }
             printf("\n");
         }

     }
    
     
     return 0;
}