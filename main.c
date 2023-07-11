/* p5_20 p5_20_rectangle_of_any_character */ 



#include <stdio.h>

void rect (char, int, int ) ; 

void rect (char fillCharacter, int rows, int columns) {
	for ( ; rows > 0 ; rows-- ) {
		int c = columns ; 
		for ( ; c > 0 ; c-- ) {
			printf("%c", fillCharacter) ; 
		}
		printf("\n");
	}
}


int main(){
	int side1, side2 ; 
	char fillCharacter ; 
	
	printf("Enter a character, rows and columns :");
	scanf("%c %d %d", &fillCharacter, &side1, &side2 );

	printf("\n\n"); 

	rect ( fillCharacter, side1, side2 ) ; 

	printf("\n");

	return 0 ;
}
