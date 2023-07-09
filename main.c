/* p5_3 p5_3_math_function */ 

#include <math.h>
#include <stdio.h>

int main(){
	
	double x, y ; 

	x = 256 ; 
	printf("Square root of %.1lf = %.1lf\n", x, sqrt(x));

	x = 2.5 ; 
	printf("value of e^%.1lf = %.1lf\n", x, exp(x) );

	x = 125.0 ; 
	printf("Natural log of %.1lf = %.1lf\n", x, log(x)); 
	
   x = 125.0 ; 
	printf("log of %.1lf to the base 10 = %.1lf\n", x, log10(x)); 

	x = -13.7 ; 
	printf("Absolute of %.1lf = %.1lf\n", x, fabs(x));
 
   x = 3.7 ; 
	printf("Ceil of %.1lf = %.1lf\n", x, ceil(x));

	x = 3.7 ; 
	printf("FLoor of %.1lf = %.1lf\n", x, floor(x));

	x = 5.0, y = 6.0 ; 
   printf("%.1lf to the power %.1lf = %.1lf\n", x, y, pow(x, y));

	x = 321.0, y = 13.9 ; 
	printf("remainder of %.1lf/%.1lf as a floating-point number = %.1lf\n", x, y, fmod(x, y));

	x = 3.14 ; 
	printf("Sine of %.2lf = %.2lf\n", x, sin(x)); 

	x = 3.14 ; 
	printf("Cosine of %.2lf = %.2lf\n", x, cos(x)); 

	x = 3.14 ; 
	printf("Tangent of %.2lf = %.2lf\n", x, tan(x)); 
}
