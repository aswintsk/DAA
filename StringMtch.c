#include<stdio.h>
#include<string.h>

int StrMt(char T[],char P[],int m,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		j=0;
		while(j<m && P[j]==T[i+j])
		{
			j=j+1;
		}
		if(j==m)
		{
			return i;
		}
	}
	return -1;
}
void main()
{
	int i,j;
	char T[100],P[100],v;
	printf("Enter Passage: ");
	scanf("%s",T);
	int n=strlen(T);
	printf("\nEnter Search Pattern: ");
	scanf("%s",P);
	int m=strlen(P);
	printf("Passage is: %s",T);
	i = StrMt(T,P,m,n);
	if(i<0)
	{
		printf("\nMatch Not Found\n");
	}
	else
	{
		printf("\nMatch Found\n");
	}
}
