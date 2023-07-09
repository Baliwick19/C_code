/* p5_8 p5_8_values_of_x */ 


#include <math.h>
#include <stdio.h>

int main(){
	
	double x ; 
	printf("\n\n");
	x = fabs(10.85);
	printf("x = %.3lf\n", x );
	x = floor(10.85);
	printf("x = %.3lf\n", x );
	x = fabs(-0.678);
	printf("x = %.3lf\n", x );
	x = ceil(9.234);
	printf("x = %.3lf\n", x );
	x = fabs(0.0);
	printf("x = %.3lf\n", x );
	x = ceil(-34.87);
	printf("x = %.3lf\n", x );
	x = ceil(-fabs(-12 - floor(-9.5))) ; 
	printf("x = %.3lf\n", x );
	return 0 ;
}
