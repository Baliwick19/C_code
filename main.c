/* p4_27 pythagorean_triples */ 


#include <math.h>
#include <stdio.h>
int main(){
	int n = 1 ;	
	for ( int i = 1 ; i <= 500 ; i++ ) { 
		for ( int j = 1 ; j <= sqrt(250000-i*i) && i >= j  ; j ++ ) {
			for ( int k = 1 ; k <= 500 ; k++ ) {
				if ( i*i + j*j == k*k ) {
					printf("%5d   [%4d,%4d,%4d]\n", n, j, i, k);
					n++ ; 
				}
			}
		}
	}
}
