#include<stdio.h>
#include<math.h>
int jump(int b[],int n,int key){
    int m,i,start,end,j;
    m=sqrt(n);
    for(i=0;i<n && key>b[i];i++){
        i=i+m;
    }
    if(i<n){
        if(b[i]==key)
           return i;
        else{
            start=i-m+1;
            end=i-1;
            for(j=start;j<=end;j++){
                if(key==b[j])
                   return j;
            }
            return -1;
        }

    }
    else 
       return -1;

}
int main(){
     int a[100],size,no,i,index;
     printf("Enter the size of array");
     scanf("%d",&size);
     printf("\n");
     printf("Enter the elements of array");
     for(i=0;i<size;i++){
         scanf("%d",&a[i]);
     }
     printf("Enter the the no. you want to search");
     scanf("%d",&no);
     index=jump(a,size,no);
     if(index==-1){
         printf("The no. is not found");
     }
     else 
         printf("The no. is found");
     return 0;
}