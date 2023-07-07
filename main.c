/* p4_35 break_and_continue */ 


#include <stdio.h>
int main(){

	// replacing break statement to it equivalent structured statement . 
	for ( int i = 1 ; i <= 10 ; i++ ) { 
		printf("%d ", i);
		if ( i == 7 ) i = 11 ; 
	}

	printf("\n\n");

	// replacing continue statement to it equivalent structured statement . 
	for ( int i = 1 ; i <= 10 ; i++ ) {
		printf("%d ", i );
		if ( i == 7 ) i = 8 ; 
	}
}
