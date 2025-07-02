#include<stdio.h>
#include<time.h>
int gcd(int m,int n){
	while(n!=0){
		int r=m%n;
		m=n;
		n=r;
	}
	return m;
}
void main(){
	int m,n;
	printf("Enter number 1:");
	scanf("%d",&m);
	printf("Enter number 2:");
        scanf("%d",&n);
	clock_t  start,end;
	double cpu_time_used; 
	start=clock();
	printf("\nGcd of %d and %d :%d \n",m,n,gcd(m,n));
	end=clock();
	cpu_time_used=(double) (end-start)/CLOCKS_PER_SEC;
	printf("Time in sec: %f \n",cpu_time_used);
	printf("Time in milli sec: %f \n",cpu_time_used*1000);

}
