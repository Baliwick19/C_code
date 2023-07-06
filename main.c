/* p4_25 number_systems */ 


#include <stdio.h>
int main(){
	
	printf("%15s%15s%15s%15s\n\n", "Decimal", "Binary", "Octal", "Hexadecimal" );
	for ( int i = 1 ; i <= 256 ; i++ ) { 
		
		printf("%15d%15b%15o%15X\n", i, i, i, i);

	}
}
