#include<stdio.h>
int cs(int a[],int n){
    int c[50],k,max,i;
    max=a[0];
    for(i=1;i<n-1;i++){
        a[i]++;
    }
    
    for(i=0;i<n-1;i++){
        c[a[i]]++;
    }



}
int main(){
    int i,a[50],size;
    printf("Enter the size of array");
    scanf("%d",size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    cs(a,size);
     
     return 0;
}