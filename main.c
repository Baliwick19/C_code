// p3_21  pre_post_incrementing

#include <stdio.h>

int main(){
	
	// Preincrementing 
	
	int x = 5 ; 

    // it first incremnets value of x by 1, then displays the values of x. 
	printf("%d\n", ++x ); 
	printf("%d\n", x ); 

	// Postincrementing

	x = 5 ; 

	// it first displays the values of x then incremnets its value by 1.
	printf("%d\n", x++ );
	printf("%d\n", x );

	return 0 ;
}
