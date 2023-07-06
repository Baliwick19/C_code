/* p4_23 compound_interest */ 


#include <stdio.h>
#include <math.h> 

int main(void) {
	int principal = 93487 ; // starting principal
	double rate = 0.05; // annual interest rate

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	// calculate amount on deposit for each of ten years
	for (int year = 1; year <= 10; ++year) {

		// calculate new amount for specified year
		int amount = principal * pow(1.0 + rate, year);

		// output one table row
		printf("%4d%15d.%d\n", year, amount/100 , amount % 100 ); 
	} 
}
