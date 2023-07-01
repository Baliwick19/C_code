// p3_24  tabular_output

#include <stdio.h>

int main(){
	
	int n = 1 ; 
	
	printf("\n\nN \t N^2 \t N^3 \t N^4 \n\n");
	while ( n <= 10 ) {
		printf("%d \t %d \t %d \t %d\n", n, n*n, n*n*n, n*n*n*n );
        n++ ; 
	}
	return 0 ;
}
