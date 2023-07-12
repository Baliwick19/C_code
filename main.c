/* p5_26 p5_26_perfect_numbers */ 


#include <stdio.h>


int perfect_numbers ( int ) ; 

int perfect_numbers ( int num ) { 
	int sum = 0 ; 
	for ( int i = 1 ; i <= num/2 ; i++ ) {
		sum += ( num % i == 0 ) ? i : 0 ; 
	}
	return ( sum == num ) ? 1 : 0 ; 
}



int main(){

	int num ; 

	printf("Enter a postive integer : ");
	scanf("%d", &num);

	if ( perfect_numbers( num ) == 1 ) {
		printf("%d is a perfect number.\n", num);
	}
	else {
		printf("%d is not a perfect number.\n",num);
	}

	printf("\n\n ______________ All perfect numbers from 0 to 10,000 ______________\n\n");
	for ( int i = 1 ; i <= 10000 ; i++ ) {
		if ( perfect_numbers( i ) == 1 ) printf("%d\n", i);	
	}

}
