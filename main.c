/* p5_27 p5_27_quadratic */ 


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void discriminant ( double, double, double ) ; 

void discriminant ( double a, double b, double c ) {
	
	double  delta = pow( b, 2.0) - 4 * a * c ; 

	int i = ( delta != 0 ) ? delta / fabs( delta) : 0 ;

	switch ( i ) {
		
		case -1 : 

			printf("Roots are imaginary.\n");
			printf("Roots: %.2lf +/- i %.2lf", -b / ( 2 * a ), sqrt( -1 * delta ) / ( 2 * a ) );
			break ; 

		case 0 :

			printf("Roots are real and same.\n");
			printf("Roots: %.2lf", -b / 2 * a );
			break ;

		case  1 :

			printf("Roots are real and distinct.\n");
			printf("Roots: %.2lf and %.2lf.", ( -b + sqrt( delta ) ) / ( 2 * a ) ,  ( -b - sqrt( delta ) ) / ( 2 * a ) );
			break ;
	}
}

int main() { 
	
	double a, b, c ; 
	a = b = c = 0 ; 

	printf("Enter coefficents of quadratic equation: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant(a, b, c);

	return 0 ;
}
