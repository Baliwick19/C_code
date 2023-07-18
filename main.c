/* p6_19 p6_19_dice_rolling */ 


#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice( int, int) ; 

void dice( int n, int N){

	srand(time(NULL));

	int max = n * 6 + 1  ; 

	int frequency[ max ]  ;

	for ( size_t m = 0 ; m < max ; m++ ) {
		frequency[m] = 0 ; 
	}

	int sum = 0 ; 

	for ( size_t i = 0 ; i < N ; i++ ) { 
		sum = 0 ; 
		for ( size_t j = 0 ; j < n ; j++ ) {
			sum += rand() % 6 + 1 ; 		
		}
		++frequency[sum] ; 
	}

	printf("%15s %15s\n\n", "SUM", "FREQUENCY");

	for ( size_t k = n ; k < max ; k++ ) {
		printf("%15zu %15d\n", k, frequency[k]);
	}
}

int main(){
	
	int number_of_dice_to_roll, number_of_times_to_roll ; 

	printf("Enter number of dice to roll: ");
	scanf("%d", &number_of_dice_to_roll);

	printf("Enter number of time to roll them: ");
	scanf("%d", &number_of_times_to_roll); 

	dice(number_of_dice_to_roll, number_of_times_to_roll);
}
