/* p4_18 bar_chart */ 

#include <stddef.h>
#include <stdio.h>
int main(){
	
	size_t size = 0 ; 

	for ( size_t i = 1 ; i <= 5 ; i++ ) {
		printf("Enter number %zu: ", i); 
		scanf("%zu", &size );

		for ( size_t j = 1 ; j <= size ; j++ ) { 
			printf("*");
		}
		printf("\n\n");
	}
}
