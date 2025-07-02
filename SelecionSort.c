#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int arr[1000];
void sSort(int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		arr[i]=arr[min];
	}
}

void main()
{
	int i,n;
	double ctu;
	clock_t s,e;
	printf("Enter size: ");
	scanf("%d",&n);
	if(n>1000 || n<1)
	{
		printf("Invalid size");
		return;
	}
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000;
	}
	s=clock();
	sSort(n);
	e=clock();
	ctu = (double)(e-s)/CLOCKS_PER_SEC;
	printf("\nCPU time: %fs\n",ctu);
	printf("\n Sorted : \n");
	for(i=0;i<n;i++)
	{
		printf("%d|",arr[i]);
	}

}
