// p3_25  tabular_output

#include <stdio.h>

int main(){
	
	int n = 1  ; 
	
	printf("\n\nN \t N+3 \t N+6 \t N+9 \n\n");
	while ( n <= 5 ) {
		int m = 7 * n ; 
		printf("%d \t %d \t %d \t %d\n", m, m + 3, m + 6, m + 9);
        n++  ; 
	}
	return 0 ;
}
