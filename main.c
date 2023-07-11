/* p5_13 p5_13_statements */ 

	


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n ; 

	// 1 to 6 
	srand(time(0));
	n = rand() % 6 + 1  ;
	printf("\n%d", n);
	// 100 to 1000 
	
	n = rand() % 900 + 100 ; 
	printf("\n%d", n);

	// 0 to 19 
	
	n = rand() % 20 ; 
	printf("\n%d", n);

	// 1000 to 2222 
	
	n = rand() % 1222 + 1000 ;
	printf("\n%d", n);

	// -1 to 1 ; 
	
	n = rand() % 2 - 1 ; 
	printf("\n%d", n);

	// -3 to 11 
	
	n = rand() % 14 - 3 ; 
	printf("\n%d\n", n);


}
