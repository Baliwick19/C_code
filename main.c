/* p5_32 p5_32_guess_the_numbers */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guessTheNumber ( void ) ;

void guessTheNumber ( void ){
	
	srand(time(0));

	int value = rand() % 1000 + 1 ;

	printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first number.\n");

	int guess = 0 ; 

	scanf("%d", &guess); 

	while ( value != guess ) {
		printf("%s\n", ( guess > value) ? "Too high. Try again." : "Too low. Try again" );
		scanf("%d", &guess); 
	}

	printf("Excellent! You guessed the number!\n");

}

int main() {
	guessTheNumber(); 
	return 0 ;
}
