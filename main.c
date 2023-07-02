/* p3_39 checkboard_pattern */ 

#include <stdio.h>

int main(){
	
	int i = 1 ; 
	while ( i <= 8 ){
		
		printf( ( i % 2 == 0 ) ? " " : "" );
		int j = 1 ; 
		while ( j <= 8 ){
			printf("%s", "* ");
			j++ ; 
		}
		i++ ; 
		puts("");
	}
}
