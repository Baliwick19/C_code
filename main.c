/* p6_12 p6_12_statements */ 

#include <stddef.h>
#include <stdio.h>

int main(){
	
	// a)
	
	double sales[20] ; 

	for ( size_t i = 0 ; i < 20 ; i++ ) {
		scanf("%lf", &sales[i] );
	}

	// b) 
	
	double allowance[75] ; 

	for ( size_t i = 0 ; i < 75 ; i++ ) {
		allowance[i] += 1000 ; 
	}

	// c) 
	
	int numbers[50] ; 

	for ( size_t i = 0 ; i < 50 ; i++ ) {
		numbers[i] = 0 ; 
	}

	// d) 
	
	int GPA[10] ; 

	for ( size_t i = 0 ; i < 10 ; i++ ) {
		printf("%3d\n", GPA[i]);
	}
	
}
