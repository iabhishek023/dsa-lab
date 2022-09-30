#include<stdio.h>
int bubble(int a[],int n){
    int pass,step,temp,i;
    for(pass=0;pass<n-1;pass++){
        for(step=0;step<n-pass-1;step++){                   //pass+step=nw
            if(a[step]>a[step+1]){
                temp=a[step];
                a[step]=a[step+1];
                a[step+1]=temp;
            }           
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int i,a[50],size;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
   
    
    bubble(a,size);
 
 
 return 0;
}
