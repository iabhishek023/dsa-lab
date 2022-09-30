#include<stdio.h>
int main(){
     int a[10];
     int i,x,n;                                    //i for loop, x is the no. to be inseted , n is index      
     for(i=0;i<10;i++){
         printf("enter a no.");
         scanf("%d",&a[i]);
     }
     printf("enter a no. ro be inserted");
     scanf("%d",&x);
     printf("the no. to be inserted is %d\n",x);
     printf("at what index you want to insert");
     scanf("%d",&n);
     printf("%d\n",n);
     for(i=9;i>=n;i--){
         a[i+1]=a[i];
        }
      a[n]=x;
      
     for(i=0;i<n;i++) {
         printf("%d\n",a[i]);
     }


     return 0;
}