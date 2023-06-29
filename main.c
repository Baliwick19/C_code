// p3_20  salary_calculator

#include <stdio.h>

int main(){
	
	int hours_worked; 
	double hourly_rate ; 

	printf("\n\nEnter # of hours worked ( -1 to end ): ");
	scanf("%d", &hours_worked);

	while ( hours_worked != -1 ) {
		
		printf("Enter hourly rate of the worker ( $00.00) ");
		scanf("%lf", &hourly_rate);

		printf("Salary is $%.2lf", ( hours_worked <= 40 ) ? hours_worked * hourly_rate : (hours_worked+0.5) * hourly_rate );
	

		printf("\n\nEnter # of hours worked ( -1 to end ): ");
		scanf("%d", &hours_worked);

	}

	return 0 ;
}
