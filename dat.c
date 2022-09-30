#include<stdio.h>
int main(){
    int dat[100]={0},a[100],size,i,j,max=0;
    printf("Enter the size of array");
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
     printf("maximum no. is %d\n",max);
    for(i=0;i<size;i++){
        dat[a[i]]++;
    }
    for(i=0;i<=max;i++){
        printf("%d ",dat[i]);
    }printf("\n");
    for(i=0;i<=max;i++){
        
            printf("%d is being printed %d times\n",i,dat[i]);
        //printf("\n");
    }
    
    return 0;
}