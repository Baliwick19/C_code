// p3_22  checking_if_a_number_is_prime

#include <stdio.h>

int main(){

	unsigned long long int num ; 

	printf("Enter a number: "); 
	scanf("%lld", &num ); 

	int flag = 1 ; 

	unsigned long long int i = 2 ; 
	if ( num == 1 ) flag = 0 ; 
	else 
	while ( i <= num/2.0 ) {
		if ( num % i == 0 ){
			flag = 0 ; 
			i = num ; 
		}
		i++   ; 
	};

	if ( flag == 1 ) {
		printf("Prime");
	}
	else {
		printf("Not Prime");
	}

	return 0 ;
}
