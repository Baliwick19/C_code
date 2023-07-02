/* p3_42 factorial */ 

#include <stdio.h>

int main(){

	printf("\n\n -----------------Factorial----------------u \n\n");
	int num = 0 ; 

	printf("a) Factorial calculator: \n\n"); 

	printf("Enter a number: ");
	scanf("%d", &num );

	unsigned long long int factorial = 1; 
	int i = 1  ;

	while ( i <= num ) {
		factorial *= i ; 
		i++ ; 
	}

	printf("Factorial of %d is %lld", num, factorial );

	printf("\n\nb) Value of e: \n\n");

	double napier = 0;
	int terms = 0, j = 0 ;  

	printf("Number of terms: ") ;
	scanf("%d", &terms);

	while ( j <= terms ) {

		unsigned long long int fact = 1; 
		int i = 1  ;

		while ( i <= j ) {
			fact *= i ; 
			i++ ; 
		}

		napier +=(double) 1 / fact ; 
		j++ ; 
	}

	printf("Value of e upto %d is %lf\n\n", terms, napier);

	printf("c) Value of exp(x) for given x: \n\n");

	double exp = 0 ; 
	int x ; 

	printf("Enter power (x): "); 
	scanf("%d", &x); 

	printf("Number of terms: ") ;
	scanf("%d", &terms);

	j = 0 ; 
	while ( j <= terms ) {

		unsigned long long int fact = 1; 
		int i = 1  ;

		while ( i <= j ) {
			fact *= i ; 
			i++ ; 
		}

		int k = 1 ; 
		int xpow = 1  ; 
		while ( k <= j ) {
			xpow *= x ;
			k++ ; 
		}

		exp += ( double ) xpow / fact ; 
		j++ ; 

	}

	printf("Value of exp(%d) upto %d is %lf\n\n", x, terms, exp);

}
