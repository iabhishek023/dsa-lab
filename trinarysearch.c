#include<stdio.h>
int tr(int b[],int x,int h,int l){
    int mid1,mid2;
     if(l<=h){
         mid1=(l+(h-l)/3);
         mid2=(h-(h-l)/3);
         if(x==mid1)
            printf("Element found at position %d",mid1);
        else if(x==mid2)
            printf("Element found at position %d",mid2+1);
        else if(x<mid1)
            tr(b,x,mid1-1,l);
        else if(x>mid2)
            tr(b,x,h,mid2+1);
        else
            tr(b,x,mid2-1,mid1+1);
     }
}
int main(){
     int a[100],size,no,i,high,low;
     printf("Enter the size of array");
     scanf("%d",&size);
     for(i=0;i<size;i++){
         scanf("%d",&a[i]);
     }
     for(i=0;i<size;i++){
         printf("%d",a[i]);
     }printf("\n");
     printf("Enter the no. you want to search");
     scanf("%d",&no);
     high=size-1;
     low=0;
     tr(a,no,high,low);
     return 0;
}