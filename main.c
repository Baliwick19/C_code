/* p4_14 factorials */ 

#include <stdio.h>

int main(){

	unsigned long long factorial = 1 ; 

	printf("%10s %22s\n", "Integer", "Factorial" );
	for ( int j = 0 ; j <= 20 ; j++){
		factorial = 1 ; 
		for( int i = 1 ; i <= j ;  i++ ) {
			factorial *= i ; 
		}
		printf("%10d! %22lld\n", j, factorial); 
	}
	return 0 ;
}
