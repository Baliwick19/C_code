// p3_23  find_the_largest_number


#include <stdio.h>

int main(){
	
	int counter = 1, number, largest = 0 ;

	while ( counter <= 10 ) {
		printf("Enter non-negeative integer ( %d ): " , counter );
		scanf("%d", &number);
	
		largest = ( number > largest ) ? number : largest ; 
		counter++ ; 
	}

	printf("\nLargest of 10 numbers is %d", largest );
	return 0 ;
}

