/* p5_35 p5_35_fibonacci_numbers */ 

#include <stdio.h>

unsigned long long int fibonacci ( int ) ; 

unsigned long long int fibonacci ( int nth ) { 

	int a = 0, b = 1, sum = 0 ; 
	int i = 0 ; 

	while ( i < nth ) {
		/* printf("%d ", a ); */
		sum = a + b ; 
		a = b ; 
		b = sum ; 
		i++ ; 
	}
	 return a ; 
}

int main(){

	printf("Enter index: ");
	int index = 0 ; 
	scanf("%d", &index);

	// it can print maximum upto 46th term . 
	printf("%d term of fibonacci is %lld\n", index,  fibonacci( index ));
}

