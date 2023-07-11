/* p5_15 p5_15_hypotenuse */ 


#include <stdio.h>
#include <math.h>

double hypotenuse( double, double ) ; 

double hypotenuse( double a , double b ) { 
	return sqrt ( pow( a, 2.0 ) + pow ( b , 2.0 ) ) ;
}

int main(){
	double a , b ; 
	printf("Enter side1 and side2 : ");
	scanf("%lf %lf", &a, &b);
	printf("%.0lf^2 + %.0lf^2 = %.0lf^2\n", a , b, hypotenuse( a, b )) ;
}
