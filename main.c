/* p5_28 p5_28_sum_of_digits */ 

#include <stdio.h>

int sum_of_digits ( unsigned long long int num ) { 
	int sum = 0 ; 

	while ( num != 0 ) {
		sum += num % 10 ; 
		num /= 10 ; 
	}
	return sum ;
}

int main(){
	
	unsigned long long int num ; 

	printf("Enter a a non negative integer : ");
	scanf("%lld", &num );

	printf("\n\nSum: %3d\n\n", sum_of_digits( num ));

	return 0 ;

}
