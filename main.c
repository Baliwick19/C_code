/* p5_31 p5_31_coin_tossing */ 

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip ( void ) ; 

int flip ( void ) {
	return rand() % 2 ; 
}


int main(){

	int number_of_times_toss = 0 ; 
	printf("Number of time to toss: ");
	scanf("%d", &number_of_times_toss); 

	srand((time(0))) ; 
	int heads = 0 , tails = 0 ; 

	printf("Number of times coin tossed = %d\n", number_of_times_toss);
	while ( number_of_times_toss > 0 ) {
		( flip() == 1 ) ? heads++ : tails++ ; 
		number_of_times_toss-- ;
	}

	printf("%10s %10s\n", "Heads", "Tails");
	printf("%10d %10d\n", heads, tails);

	return 0 ;
}
