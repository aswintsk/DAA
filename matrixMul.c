#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int r,c;
void main()
{
	int v,i,j;
	printf("Enter no of rows: ");
	scanf("%d",&r);
	printf("Enter no of columns: ");
	scanf("%d",&c);
	int A[r][c],B[r][c];
	
	srand(time(NULL));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			A[i][j]=rand()%10;
			B[i][j]=rand()%10;
		}
	}

	printf("\nMatrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	clock_t s,e;
	double ctu;

	int C[r][c],k;
	if(r!=c)
	{
		printf("Invalid row and column length to perform multiplication!!");
		return;
	}

	s=clock();
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=0;
			for(k=0;k<c;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	e=clock();
	ctu=(double)(e-s)/CLOCKS_PER_SEC;
	printf("\nSum Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}

	printf("\nTime taken: %fs\n",ctu);

}
