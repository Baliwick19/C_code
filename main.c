/* p5_16 p5_16_sides_of_a_triangle */ 


#include <math.h>
#include <stdio.h>
double area( double, double, double ) ; 

double area ( double a, double b, double c ) { 
	double s = ( a + b + c ) / 2 ; 
	return  sqrt( s * ( s - a ) * ( s -b ) * ( s - c ) );
}

int main(){
	double a, b, c ; 

	printf("Enter side1, side2 and side3 : "); 
	scanf("%lf %lf %lf", &a, &b, &c );

	if ( a + b <= c ) puts("Invalid sides.");
	else printf("Area of a trinangle with sides %.3lf, %.3lf and %.3lf is %.2lf", a, b, c, area ( a, b, c ) );

	return 0 ;

}

