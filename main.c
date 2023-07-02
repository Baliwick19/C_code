/* p3_36 armstrong_numbers */ 

#include <stdio.h>

int main(){

	int num ; 

	printf("Enter an integer: ");
	scanf("%d", &num);

	int temp = num, sum = 0  ; 

	while ( temp != 0 ) {
		int digit = temp % 10 ; 
		sum += digit*digit*digit ; 
		temp /= 10 ; 
	}

	if ( sum == num ) {
		printf("%d is an armstrong number", num);
	}
	else {
		printf("%d is not an armstrong number", num);
	}

	return 0 ;
}
