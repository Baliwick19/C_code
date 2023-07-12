/* p5_33 p5_33_guess_the_numbers */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessTheNumber ( void ) ;

int guessTheNumber ( void ){
	
	srand(time(0));

	int value = rand() % 1000 + 1 ;

	printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first number.\n");

	int guess = 0 ; 
	int trials = 0 ;

	scanf("%d", &guess); 

	while ( value != guess ) {
		printf("%s\n", ( guess > value) ? "Too high. Try again." : "Too low. Try again" );
		scanf("%d", &guess); 
		trials++ ; 
	}

	printf("Excellent! You guessed the number!\n");

	return trials;
}

int main() {

	int guess = guessTheNumber() ; 
	if ( guess < 10 ) printf("%s", "Either you know the secret or you got lucky!") ;
	else if ( guess == 10 ) printf("%s", "Aha! You know the secret!");
	else printf("%s","You should be able to do better!");

	return 0 ;
}
