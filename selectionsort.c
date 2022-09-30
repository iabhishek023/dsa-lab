#include<stdio.h>
int main(){
     int temp,a[100],size,i=0,j,min,k;
     printf("Enter the size of array");
     scanf("%d\n",&size);
     for(k=0;k<size;k++){
         scanf("%d",&a[k]);
     }
     printf("The unsorted array is");
     for(k=0;k<size;k++){
         printf("%d ",a[k]);
     }
    
    
    for(j=i+1;j<size;j++){
        min=a[i];
        if(a[j]<min){
            temp=a[j];
            a[j]=min;
            min=temp;
            i++;
        }
    }
    printf("The sorted array is ");
    
    for(i=0;i<size;i++){
          printf("%d ",a[i]);
    }
     return 0;
}
