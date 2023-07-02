/* p3_37 multiples_of_number */ 

#include <stdio.h>

int main(){
	
	int i = 1 ; 

	while ( i <= 500 ) {
		printf(( i % 50 == 0 ) ? "$\n" : "$");
		i++ ; 
	}
	return 0 ;
}

