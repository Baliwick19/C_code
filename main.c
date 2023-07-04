/* p4_11 sum_of_multiples */ 

#include <stdio.h>

int main(){
	int sum = 0 ; 
	
	for ( int i = 7 ; i <= 100 ; i += 7 ){
		sum += i ; 
	}

	printf("Sum of all multiples of 7: %d", sum); 
	return 0 ;
	
}
