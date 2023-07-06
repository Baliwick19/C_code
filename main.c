/* p4_21 ascii_values */ 


#include <stdio.h>
int main(){
	
	for( int i = 0 ; i <= 127 ; i++ ) { 
		printf("%c ", i); 
		if ( i%10 == 0 ) printf("\n"); ; 
	}
}
