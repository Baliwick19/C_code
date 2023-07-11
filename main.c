/* p5_25 p5_25_maximum */ 


#include <stdio.h>

float largest ( void ) { 
	
	int i = 1 ; 

	float num,  largest ; 

	while ( i < 5 ) { 
		
		printf("Enter number %d : ", i );
		scanf("%f", &num);

		largest = ( i == 1 ) ? num : ( ( largest < num ) ? num : largest ) ;

		i++ ; 

	}

	return largest;
}

int main(){
	
	printf("%.2f\n", largest( ));

	return 0 ;
}

