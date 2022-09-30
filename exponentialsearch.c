#include<stdio.h>
#include<math.h>
int exponential(int b[],int n,int x){
     int i,j,start,end,k,flag=0;
     i=0;
     while(i<n && x>b[i]){
           i=2*i;
           i++;
     }
     if(i<n){
        if(b[i]==x)
           return i;
    
        else if(x<b[i]){
            start=(i/2)+1;
            end=i-1;
            for(j=start;j<=end;j++){
                if(x==b[j])
                   return j;
            }
        }
        else {
            for (k=i;k<n;k++)
            {
                if(x==b[k]){
                    flag=1;
                    break;
                }
                if(flag==1){
                    printf("Found");
                }
            }
        }
        

        }
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
     index=exponential(a,size,no);
      if(index==-1){
         printf("The no. is not found");
     }
     else 
         printf("The no. is found");
     return 0;
     
}