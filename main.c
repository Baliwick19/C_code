/* p5_19 p5_19_rectangle_of_asterisks */ 


#include <stdio.h>

void rect ( int, int ) ; 

void rect ( int rows, int columns) {
	for ( ; rows > 0 ; rows-- ) {
		int c = columns ; 
		for ( ; c > 0 ; c-- ) {
			printf("*") ; 
		}
		printf("\n");
	}
}


int main(){
	int side1, side2 ; 

	printf("Enter rows and columns :");
	scanf("%d %d", &side1, &side2 );

	printf("\n\n"); 

	rect ( side1, side2 ) ; 

	printf("\n");

	return 0 ;
}
