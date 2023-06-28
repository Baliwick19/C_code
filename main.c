// p3_7 c_program


#include <stdio.h>

int main(){

	int x, y ; 

	printf("Enter x : ") ;
	scanf("%d", &x) ; 

	printf("Enter y : ") ;
	scanf("%d", &y) ; 

	int i = 1, power = 1 ; 

	while ( i <= y ) {

		power *= x ; 
		i++ ; 

	}

	printf("Power : %d", power) ;

	return 0 ; 

}
