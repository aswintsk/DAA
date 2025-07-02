#include<stdio.h>
#include<time.h>

int sumofn(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}

void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	clock_t s,e;
	double t;
	s=clock();
	printf("Sum of %d elements: %d \n",n,sumofn(n));
	e=clock();
	t=(double)(e-s)/CLOCKS_PER_SEC;
	printf("Time in sec: %f \n",t);
}
