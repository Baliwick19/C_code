/* p5_18 p5_18_even_odd */ 



#include <stdio.h>

int even_odd ( int ) ; 

int even_odd ( int a ){
	if ( a % 2 == 0 )
		return  1 ;
	else
		return 0 ;
}

int main(){
	int num ; 

	printf("Enter an interger : ");
	scanf("%d", &num); ;

	printf("Status : \n%d\n", even_odd( num ));

	return  0 ;
}
