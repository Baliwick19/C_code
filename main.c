/* p6_10 p6_10_sales_commission */ 


#include <stdio.h>

int main(){
	int j = 0 ; 
	static int k = 0 ; 
	for ( int i = 100 ; i < 200 ; i++ ) {
		double per = 0.09 ; 
		while ( (int) ( per * k )  == i ) { j++; k++ ;  } 
		printf("%d", k );
	}

	printf("%d %d\n", j , k );
}
