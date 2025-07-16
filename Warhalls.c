#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int **warsh(int a[100][100],int n)
{
	int** r;
	r = malloc(n* sizeof(int*));
	int i,j,k;
	for(i =0 ;i<n;i++)
	{
		r[i] = malloc(n * sizeof(int));
	}
	for(i =0 ;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			r[i][j] = a[i][j] ;
		}
	}
	
	for(k= 0 ;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				r[i][j]=r[i][j] || (r[i][k] && r[k][j]); 
			}
		}
	}
	return r;
}


void main()
{
	int i,j,n;

	printf("Enter size: ");
	scanf("%d",&n);
	int a[n][n];
	srand(time(NULL));
	for(i =0 ;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]= rand()%2;
		}
	}
	for(i =0 ;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	int** r;
	r = warsh(a,n);

	printf("\nWarshalls matrix:\n");
	for(i =0 ;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}

	for(i =0;i<n;i++)
	{
		free(r[i]);
	}
	free(r);
}
