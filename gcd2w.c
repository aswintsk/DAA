#include<stdio.h>
#include<time.h>
int gcd(int m,int n)
{
	int t,f=0;
	if(m<=n){
		t=m;
	}
	else{
		t=n;
	}
	while(1){
		
		int r;
		r=m%t;
		if(r==0){
			r=n%t;
			if(r==0){
				return t;
			}
		}
		t--;
	}
}



void main(){
	int m,n;
	printf("Enter number 1:");
        scanf("%d",&m);
        printf("Enter number 2:");
        scanf("%d",&n);
	clock_t s,e;
	double time;
	s=clock();
	printf("GCD of %d and %d : %d\n",m,n,gcd(m,n));
	e=clock();
	time=(double)(e-s)/CLOCKS_PER_SEC;
	printf("Time in sec: %f \n",time);
	printf("Time in milli sec: %f \n",time*1000);

}
