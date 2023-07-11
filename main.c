/* p5_10 p5_10_rounding_numbers */ 




#include <math.h>
#include <stdio.h>
int main(){
	
	float x ; 

	printf("Enter a number: "); 
	scanf("%f",&x); 

	printf("Rounded values of %.2f is %.1f\n", x, floor( x + 0.5)) ;

	return  0 ;
}
