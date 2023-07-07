/* p4_37 p4_37_remove_continue */ 

#include <stdio.h>
int main(){

	// replacing continue statement to it equivalent structured statement . 
	for ( int i = 1 ; i <= 10 ; i++ ) {
		printf("%d ", i );
		if ( i == 7 ) i = 8 ; 
	}
}
