/* p4_26 pi */ 


#include <stdio.h>
#include <stdlib.h>
int main(){

	double pi = 0.0 ; 
	int dividend = 1 , terms = 0 ; 

	printf("Enter number of terms: ") ;
	scanf("%d", &terms );

	printf("\n\n");

	printf("\n\n______________ Value of pi ______________\n\n");

	printf("%10s %10s\n\n", "Terms", "pi");
	for ( int i = 1 ; i <= terms ; i++ ) { 

		pi += ( i % 2 == 0 ) ? (-4.0 / dividend ) : ( 4.0 / dividend )  ; 
		dividend += 2 ; 
		
		printf("%10d %10lf\n\n", i, pi  );
	}
	 
	printf("Value of PI: %lf ", pi );

	return 0 ;
	

}
