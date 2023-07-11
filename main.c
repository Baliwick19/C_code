/* p5_11 p5_11_rounding_numbers */ 



#include <math.h>
#include <stdio.h>
int main(){
	
	double x ; 

	printf("Enter value of x : ");
	scanf("%lf", &x ); 

	printf("Rounded value of %lf upto unit position is %.0lf.\n",x,  floor(x  + .5) );
	printf("Rounded value of %lf upto tenth position is %.1lf.\n",x,  floor(x * 10 + .5)/10 );
	printf("Rounded value of %lf upto hundreths position is %.2lf.\n",x,  floor(x * 100 + .5)/100 );
	printf("Rounded value of %lf upto thousandths position is %.3lf.\n",x,  floor(x * 1000 + .5)/1000 );
}
