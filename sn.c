#include<stdio.h>
void main(){
    int n,sum=0;
    while(1){
        printf("enter the number to add '0' to exit = ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        sum+=n;
    }
    printf("sum = %d",sum);
}