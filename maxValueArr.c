#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main(){
	int arr[10000],n,l,i;
	double ctu;
	clock_t s,e;
	printf("Enter size of array: ");
	scanf("%d",&n);
	if(n>10000 || n<1) 
	{
	printf("invalid size");
	return ;
	}

	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("\nArray :");
	for(i=0;i<n;i++)
	{
		printf("%d| ",arr[i]);
	}
	s=clock();
	int max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	e=clock();
	ctu=(double)(e-s)/CLOCKS_PER_SEC;
	printf("\nMax Value: %d \n",max);
	printf("Time taken: %fs \n",ctu);

}
