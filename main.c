/* p3_33 hollow_square_of_asterisks */ 

#include <stdio.h>

int main(){

	int size = 0 ; 

	printf("Enter the size : ");
	scanf("%d", &size);
	int i = 1 ; 

	while ( i <= size ) {
		int j = 1 ;

		if ( i == 1 ) {

			while ( j <= size ) {

				printf("*");
				j++ ; 
			}
		}
		else if ( i == size ) {

			while ( j <= size ) {

				printf("*");
				j++ ; 
			}
		}
		else {
			printf("*");
			j = 2 ; 
			while ( j < size ) {
				printf(" ");
				j++ ; 
			}
			printf("*");
		}
		printf("\n");

		i++ ; 
	}
}
