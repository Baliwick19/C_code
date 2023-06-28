// p3_5 sum_from_1_to_10 

#include <stdio.h>


int main(){

	int x = 1 ;
	int sum = 0 ;
	
	while ( x <= 10 ){
	
		sum += x ; 
		x++ ; 

	}

	printf("Sum is %d", sum) ; 

	return 0; 

}
