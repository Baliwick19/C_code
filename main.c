/* p4_13 natural_numbers_arithmetic */ 


#include <stdio.h>

int main(){
	
	int sum = 0 , sum_square = 0 , sum_cube = 0 ; 
	
	int num ; 

	printf("Enter the number: "); 
	scanf("%d", &num);

	printf("%10s %10s %10s\n\n", "SUM", "SQUARE-SUM", "CUBE-SUM");
	for ( int i = 1 ; i <= num ; i++ ) {
		sum += i ; 
		sum_square += i*i ; 
		sum_cube += i*i*i ; 
	}
		printf("%10d %10d %10d\n", sum, sum_square, sum_cube); 
}
