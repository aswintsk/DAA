#include<stdio.h>
#include<time.h>

double factRec(double n)
{
	if(n==0)
	{
		return 1;
	}
	else return n*factRec(n-1);
}

void main()
{
	clock_t s,e;
	int n;
	double fact=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=clock();
	for(int i=n;i>0;i--)
	{
		fact*=i;
	}
	e=clock();
	double ctu = (double)(e-s)/CLOCKS_PER_SEC;
	printf("(NonRec)Factorial of %d: %f\n",n,fact);
	printf("(NonRec)Time Taken: %f \n",ctu);

	s=clock();
	fact=factRec(n);
	e=clock();
	ctu = (double)(e-s)/CLOCKS_PER_SEC;
	printf("(Rec)Factorial of %d: %f\n",n,fact);
	printf("(Rec)Time Taken: %f\n",ctu);

}
