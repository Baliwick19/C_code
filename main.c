/* p4_15 compound_interest */ 

#include <stdio.h>
#include <math.h> 

int main(void) {
	double principal = 1000.0;


	for ( int rate = 5 ; rate <= 10 ; rate++ ){

		printf("\n\n__________________Rate = %.2lf__________________\n\n", rate / 100.0);
		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (int year = 1; year <= 10; ++year) {

			double amount = principal * pow(1.0 + rate/100.0, year);

			printf("%4d%21.2f\n", year, amount); 
		} 
	}
} 
