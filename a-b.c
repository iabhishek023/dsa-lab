#include<stdio.h>
int main(){
     int a[10],b[5],c[19],i,j,k=0;
     printf("enter the elements of first array:");
      for(i=0;i<10;i++){
          scanf("%d",&a[i]);
          printf("\n");
      }
      printf("enter the elements of second array:");
      for(i=0;i<5;i++){
          scanf("%d",&b[i]);
          printf("\n");
      }
      i=0;j=0;
      while(i<10 && j<5){
          if(a[i]==b[j]){
                j++;
                i++;
                
            }
          else if(a[i]<b[j]){
              c[k]=a[i];
              i++;
              k++;
          }
          else
              j++;
      }
      while(i<10){
          c[k]=a[i];
          i++;
          k++;
      }
      printf("A-B=\n");
      for(i=0;i<k;i++){
          printf("%d\n",c[i]);
      }
      return 0;
}
