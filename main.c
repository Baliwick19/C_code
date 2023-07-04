/* p4_12 prime_numbers */ 

#include <stdio.h>

int main(){

	unsigned long long int num = 1  ; 
	int flag = 1 ; 
	unsigned long long int i = 2 ; 

	while ( num <= 100 ) {
		i = 2 ; 
		flag = 1 ; 
		if ( num == 1 ) flag = 0 ; 
		else {
			while ( i <= num/2.0 ) {
				if ( num % i == 0 ){
					flag = 0 ; 
					i = num ; 
				}
				i++   ; 
			}
		}
		if ( flag == 1 ) printf("%4lld\n", num );
		num++ ; 
	}
	return 0 ;
}
