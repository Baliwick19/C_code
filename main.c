// p3_17  sales_commission_calculator

#include <stdio.h>

int main(){
	
	double sales ; 

	printf("Enter sales in dollars ( -1 to end ): "); 
	scanf("%lf", &sales);
	
	while ( sales != -1 ) {
		
		printf("Salary is: %.2lf", 200 + sales * 0.09 ); 
		
		printf("\nEnter sales in dollars ( -1 to end ): "); 
		scanf("%lf", &sales);

	}

	return 0 ; 

}
