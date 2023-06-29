// p3_15 sales_tax 


#include <stdio.h>

int main(){
	
	double total_amount_collected ; 
	
	printf("Emter total amount collected  ( -1 to quit ) ") ;  
	scanf("%lf",&total_amount_collected) ;	

	while ( total_amount_collected != -1 ){
		
		printf("Total Collections: $%.1lf\n", total_amount_collected ); 

		printf("Sales : $%.1lf\n", total_amount_collected * 0.92);

		printf("County Sales Tax : $%.1lf\n", total_amount_collected * 0.5 ); 

		printf("State Sales Tax : $%.1lf", total_amount_collected * 0.4 );

		printf("\n\nEmter total amount collected  ( -1 to quit ) ") ;  
		scanf("%lf",&total_amount_collected) ;	

	}

	return 0 ;

}

