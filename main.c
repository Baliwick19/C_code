/* p4_16 triangle_printing */ 


#include <stdio.h>

int main(){
	 
	printf("\n\n");
	int size = 0 ; 

	printf("Size : "); 
	scanf("%d", &size ); 

	for ( int i = 1 ; i <= size ; i++ ) {
		for ( int j = 1 ; ( i <= size/4 )? j <= i : j <= (size/2 - i ) && i <= size/2 ; j++ ) {
			printf("*");
		}   
		for ( int k = 1 ; k <= size/4 && i >= size/2 ; k++ ) {
			printf(( ( i <= size * 3 / 4  ) ? k <= ( i - size/2 ) :  k <= ( size - i ) ) ? " " : "*" ); 
		}
		printf("\n");
	}
}
