/* p3_35 decimal_equivalent_of_a_number */ 

#include <stdio.h>

int main(){
	
	unsigned long long int bin = 0 ; 
	
	printf("Enter a binary number : ");
	scanf("%lld", &bin );

	int weight = 1 , value = 0, number_of_bits = 0  ; 
	unsigned long long int temp = bin ; 

	while ( temp != 0 ) {
		int bit = temp % 10 ;
		value += bit * weight ; 
		temp /= 10 ; 
		weight *= 2 ; 
		number_of_bits++ ; 
	}
	
	printf("Total number of bits: %d\n", number_of_bits );
	printf("Corresponding decimal value of %lld is %d ", bin, value );

	return 0 ;
}
