/* p5_14 p5_14_statements */ 





#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	srand(time(0));
	// multiples of 3 from 3 to 30 
	
	printf("\n%d\n", 3 * ( rand() % 10 + 1 ) );

	// odd number from 3 to 19 
	
	printf("%d\n", 3 + 2 * ( rand() % 9 ));

	// number from arithmetic series from 3  to 33 with cd 5 
	
	printf("%d\n", 3 + 5 * ( rand() % 7 ));

}
