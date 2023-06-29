// p3_19  interest_calculator

#include <stdio.h>

int main(){
	
	double principal, rate, days ; 

	printf("Enter loan principal ( -1 to end ): ");
	scanf("%lf", &principal); 

	while ( principal != -1 ) {
		
		printf("Enter interest rate: ");
		scanf("%lf", &rate);

		printf("Enter term of the loan in days: ");
		scanf("%lf", &days);

		printf("The interest charge is $%.2lf", principal * rate * days / 365 );

		printf("\n\nEnter loan principal ( -1 to end ): ");
		scanf("%lf", &principal); 

	}

	return 0 ;
}
