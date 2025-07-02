#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>


int* Merge( int* first, int len1,int* second, int len2)
{
	int* mix = (int*)malloc((len1+len2)*sizeof(int));
	int i=0,j=0,k=0;

	while(i < len1 && j<len2)
	{
		if(first[i] < second[j])
		{
			mix[k++] = first[i++];
		}
		else
		{
			mix[k++] = second[j++];
		}
	}
	while(i<len1)
	{
		mix[k++] = first[i++];
	}
	while(j<len2)
	{
			mix[k++] = second[j++];
	}
	return mix;
}

int* mergeSort(int* arr,int len)
{
	if(len==1)
	{
		int* base = (int*)malloc(sizeof(int));
		base[0]=arr[0];
		return base;
	}
	int mid= len/2;
	int* left =  mergeSort(arr,mid);
	int* right= mergeSort(arr+mid,len-mid);
	int* sorted = Merge(left,mid,right,len-mid);
	free(left);
	free(right);

	return sorted;
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
	int arr[n];
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("ARRAY: \n");
	for(i=0;i<n;i++)
	{
		printf("%d|",arr[i]);
	}
	int len =  sizeof(arr)/sizeof(arr[0]);
	s=clock();
	int* sorted = mergeSort(arr,len);
	e=clock();
	ctu= (double)(e-s)/CLOCKS_PER_SEC;
	printf("\nCPU time: %fs\n",ctu);
	printf("\nSorted ARRAY: \n");
	for(i=0;i<n;i++)
	{
		printf("%d|",sorted[i]);
	}
	free(sorted);
}

