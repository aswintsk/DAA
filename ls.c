#include<stdio.h>
void main(){
    int a[10]={1,4,7,3,0,2,5,9,11,23},n;
    printf("enetre the element to be searched : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(n==a[i]){
            printf("found at index %d",i);
            break;
        }
    }
}