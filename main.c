/* p3_40 infinite_loop */ 

#include <stdio.h>

int main(){
	int i = 1 ; 

	while ( 1 ) { 
		printf("%d\n", 3*i );
		i++ ; 
	}
	return  0 ;
}
