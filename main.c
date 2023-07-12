/* p5_29 p5_29_lcm */ 

#include <iso646.h>
#include <stdio.h>
int lcm ( int, int) ; 

int lcm ( int a, int b ) { 
	int i = ( a >= b ) ? a : b, j = 0 ; 

	for (  ; i <= a * b && j == 0 ; i++ ) {
		if ( i % a == 0 && i % b == 0 ) {
			j = 1 ; 
		}
	}
	return i - 1  ;
}

int main(){
	
	int a, b ; 

	printf("\nEnter two values : ");
	scanf("%d %d", &a, &b );

	printf("\nlcm of %d and %d = %d\n", a, b, lcm( a, b));

	return 0 ;
}
