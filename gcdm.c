
#include<stdio.h>
#include<stdlib.h>
void main(){
    int m,t,n,i=-1,j=-1,gcd;
    printf("enter the m and n values : \n");
    scanf("%d%d",&m,&n);
    int fm[m],fn[n];
    t=m-1;
    while(t!=0){
        if((m%t)==0){
            fm[++i]=t;
        }
        t--;
    }
    t=n-1;
    while(t!=0){
        if((n%t)==0){
            fn[++j]=t;
        }
        t--;
    }
    for(i;i>-1;i--){  
    for(j;j>-1;j--){
        if(fm[i]==fn[j]){
            gcd=fm[i];
            exit(0);
        }
    }
}
printf("GCD(%d,%d)=%d",m,n,gcd);
}
