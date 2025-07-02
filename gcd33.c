#include <stdio.h>
#include<time.h>
int getPrimeFactors(int n, int factors[]) {
	int count = 0;
    	for (int i = 2; i * i <= n; i++) {
        	while (n % i == 0) {
            		factors[count++] = i;
            		n /= i;
        	}
    	}
    	if (n > 1) {
        	factors[count++] = n;
    	}
    	return count;
}

int gcdUsingPrimeFactorization(int a, int b) {
	
	int factorsA[100], factorsB[100];
	int countA = getPrimeFactors(a, factorsA);
	int countB = getPrimeFactors(b, factorsB);

    	int used[100] = {0};
    	int gcd = 1;

    	for (int i = 0; i < countA; i++) {
        	for (int j = 0; j < countB; j++) {
			if (factorsA[i] == factorsB[j] && !used[j]) {
               			gcd *= factorsA[i];
               			used[j] = 1;
				break;
            		}
        	}
	}

	return gcd;
}

int main() {
	int a, b;
    	printf("Enter number 1: ");
    	scanf("%d", &a);
    	printf("Enter number 2: ");
    	scanf("%d",&b);
	clock_t s,e;
	double t;
	s=clock();
    	int gcd = gcdUsingPrimeFactorization(a, b);
	e=clock();
	t=(double)(e-s)/CLOCKS_PER_SEC;
	printf("GCD of %d and %d is: %d\n", a, b, gcd);
	printf("Time in sec: %f \n",t);
	printf("Time in milli sec: %f \n",t*1000);
    	return 0;
}

