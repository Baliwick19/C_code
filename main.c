/* p5_22 p5_22_seperating_digits */ 


#include <math.h>
#include <stdio.h>

void seperating_digits ( int )  ; 

void seperating_digits ( int num ) { 
	int size = 0 ; 

	int temp = num ; 

	while ( temp != 0 ) { 
		temp /= 10 ;
		size++ ; 
	}

	temp = num ; 

	for ( int i = pow(10, size-1) ; i >= 1 ; i /= 10 ) {
		printf("%d ", ( temp / i  ) % 10 );
	}
	printf("\n");
}


int main(){


	int num ; 

	printf("Enter a integer : ");
	scanf("%d", &num);

	seperating_digits( num );
	
	return 0 ;
}
