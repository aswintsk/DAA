#include<stdio.h>
int r,c;
void madd(int A[][c],int B[][c])
{
	
	int i,j,C[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("\nSum Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int v,i,j;
	printf("Enter no of rows: ");
	scanf("%d",&r);
	printf("Enter no of columns: ");
	scanf("%d",&c);
	int A[r][c],B[r][c];
	printf("Enter Array1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value at [%d][%d]: ",i,j);
			scanf("%d",&v);
			A[i][j]=v;
		}
	}
	printf("\nEnter Array2:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value at [%d][%d]: ",i,j);
			scanf("%d",&v);
			B[i][j]=v;
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
	madd(A,B);
}
