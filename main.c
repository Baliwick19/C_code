// p3_16 mortgage_calculator 


#include <stdio.h>

int main(){
	
	double mortgage_amount, mortgage_term, interest_rate ; 

	printf("Enter the mortgage amount in dollars: ");
	scanf("%lf", &mortgage_amount);

	printf("Enter Mortgage term (in years): ");
	scanf("%lf", &mortgage_term);
	
	printf("Enter Interest rate ( in percentage ): ");
	scanf("%lf", &interest_rate);

	double payable_interest = mortgage_amount / (  mortgage_term * 12 ) + mortgage_amount * ( interest_rate / 100 );
	printf("\nThe Monthly Payable Interest is: %.2lf", payable_interest);

	return 0 ;
	
}
