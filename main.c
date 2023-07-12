/* p5_34 p5_34_recursive_exponentiation */ 

#include <math.h>
#include <stdio.h>
int power ( int, int) ; 

int power ( int base, int exponent ) {
	if ( exponent == 1 ) {
		return base ;
	}
	else if ( exponent == 0 ) {
		return 1 ;
	}
	else {
		return base * power ( base, exponent -1 ) ;	
	}
}

int main(){
	
	int base, exponent ; 

	printf("%s", "Enter base and exponent : ");
	scanf("%d %d", &base, &exponent);

	printf("\nvalue of %d^%d = %d\n", base, exponent, power ( base, exponent));

	return 0 ;
}
