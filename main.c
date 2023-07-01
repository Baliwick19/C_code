// p3_26  find_the_largest_of_two_numbers

#include <stdio.h>


int main(){
	
	int num, counter = 1, largest = 0, second_largest = 0; 
	int temp = 0 ; 

	while ( counter <= 10  ){
		printf("Enter an interger: ( %d ) ", counter );
		scanf("%d", &num);	
		if ( largest < num ) {
			temp = largest ;
			largest = num ; 
		}
		if ( temp != largest ) {
			second_largest = temp ; 
		}

		counter++ ; 
	}

	printf("Largest : %d \n", largest ); 

	printf("Second Largest : %d \n", second_largest); 
	
	return  0 ;	

}
