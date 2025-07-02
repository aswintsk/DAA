#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void checkUniq(int a[],int n)
{
	int i,j;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(a[i]==a[j])
			{
				printf("\nNot unique\n");
				return;
			}
		}
	}
	return;
}

void main()
{
	int a[5000],i,n;
	double ctu;
	clock_t s,e;
	printf("Enter size of array: ");
	scanf("%d",&n);
	if(n>5000 || n<1)
	{
		printf("Invalid size!!");
		return;
	}
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	s=clock();
	checkUniq(a,n);
	e=clock();
	ctu=(double)(e-s)/CLOCKS_PER_SEC;
	printf("\nCPU time : %fs\n",ctu);
}
