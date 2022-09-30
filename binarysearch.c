#include<stdio.h>
int bs( int b[],int x,int l,int h){
    
    if(l<=h){
        int mid=(l+h)/2;
        if(x<b[mid]){
           bs(b,x,l,mid-1);
        }
       else if(x==b[mid]){
           printf("Element is at %d",mid+1);
           return 1;
       }
       else 
       {
           bs(b,x,mid+1,h);
       }
    }
}
int main(){
     int b[100],i,size,n,high,low,index;
     printf("Enter the size of the array");
     scanf("%d",&size);
     for(i=0;i<size;i++){
         scanf("%d",&b[i]);
     }
     for(i=0;i<size;i++){
         printf("%d",b[i]);
     }
     printf("Enter the no. you want to search");
     scanf("%d",&n);
     low=0;
     high=size-1;
     index=bs(b,n,low,high);
     if(index==1)
     printf("elemnet found  ");
     else
     printf("element not found");
  return 0;
}
