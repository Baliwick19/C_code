/* p3_38 counting_9s */ 

#include <stdio.h>

int main(){
	
	unsigned long long num = 0 ; //, temp = num; 
	int counter = 0  ; 

	printf("Enter a number : "); 
	scanf("%lld", &num );
	unsigned long long temp = num ; 
	while ( temp != 0 ) {
		int digit = temp % 10 ; 
		if ( digit == 9 ) counter++ ; 
		temp /= 10 ; 
	}
	printf("Number of 9's in %lld is %d", num, counter );
	return  0 ;
}
