#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* a,int* b)
{

	int temp = *a;
	*a = *b;
	*b= temp;

}
int partition(int arr[],int low,int high)
{
	int pivot = arr[high];
	int i= low-1;
	
	for(int j= low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quickSort(int arr[],int low , int high)
{
	if(low<high)
	{
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}
int main()
{
	double t;
	clock_t s,e;
	printf("Enter size: ");
	int n;
	scanf("%d",&n);
	int arr[n];

	srand(time(NULL));
	for(int i=0 ; i<n; i++)
	{
		arr[i] = rand()%100;
	}
	s=clock();
	quickSort(arr,0,n-1);
	e=clock();
	t = (double)(e-s)/CLOCKS_PER_SEC;
	printf("Sorted array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d |",arr[i]);
	}
	printf("\n");
	printf("Time taken: %fs \n",t);
	return 0;
}
