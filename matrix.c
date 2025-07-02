#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n;
	int A[100][100], B[100][100], C[100][100];
	clock_t start, end;
	double cpu_time_used;

	printf("\n Enter the size of Square Matrix : ");
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}

	printf("\n The randomly generated Matrix A is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("\t%d",A[i][j]);
		}
		printf("\n");
	}

	printf("\n The randomly generated Matrix B is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("\t%d",B[i][j]);
		}
		printf("\n");
	}

	start = clock();
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			C[i][j] = 0;
			for(int k=0; k<n; k++)
			{
				C[i][j] = C[i][j] + A[i][j] * B[i][j];
			}
		}
	}
	end = clock();

	cpu_time_used = (double) (end - start) / CLOCKS_PER_SEC;

	printf("\n The Resultant Matrix C = A * B is:\n");

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("\t%d",C[i][j]);
		}
		printf("\n");
	}

	printf("\n Time Taken : %f seconds", cpu_time_used);
	printf("\n Time Taken : %f milli-seconds", cpu_time_used*1000.0);
	printf("\n Time Taken : %f micro-seconds \n\n", cpu_time_used*1000000.0);

	return 0;
}
