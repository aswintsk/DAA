#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void linear(int k,int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==k)
		{
			printf("\nElement %d found at pos: %d\n",k,i+1);
			return;
		}
	}
	printf("\nElement %d not found!!\n",k);
}

void main()
{
	int key,i,n,v;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int A[n];
	
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		A[i]=rand()%100;
	}
	printf("\nEnter key to search: ");
	scanf("%d",&key);
	/*
	printf("\nArray: ");
	for(i=0;i<n;i++)
	{
		printf("|%d",A[i]);
	}
	*/
	printf("\n");
	clock_t s,e;
	double t;
	s=clock();
	linear(key,A,n);
	e=clock();
	t=(double)(e-s)/CLOCKS_PER_SEC;
	printf("\nTime in sec: %f \n",t);
}
