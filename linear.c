#include<stdio.h>
int linear(int a[],int x,int ul){
    int j;
    for(j=0;j<ul;j++){
        if(a[j]==x){
         printf("The no. is found at position %d",j+1);
         return 1;
         }
     } 
          printf("not found ");

}
int main(){
    int a[100],size,find,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    printf("Enter the no. you want to search");
    scanf("%d",&find);
    linear(a,find,size);
     
     return 0;
}