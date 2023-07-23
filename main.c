/* p6_22 p6_22_total_sales */ 

#include <stddef.h>
#include <stdio.h>

int main(){

	int product_salesperson[7][6] = {0} ; 
	size_t i = 0 ; 
	for ( size_t j = 0 ; j < 6 ; j++ ) {
		if ( j != 0 &&  j != 5   ) { 
			printf("\nSalesPerson # %zu :\n\n", j);
			printf("%11s | %10s", "Product No.", "Sales ($) " ) ; 
		}
		i = 0 ; 
		for (   ; i < 6 ; i++ ) {

			if ( i == 0 && j != 5 ) product_salesperson[i][j] = j ; 
			if ( j == 0 && i != 6 ) product_salesperson[i][j] = i ; 
			if ( j != 0 && i != 0 && j != 5 && i != 6  ) { 
				printf("\n%6zu  %10s", i , "" );
				scanf("\t\t%d", &product_salesperson[i][j] );

				product_salesperson[6][j] += product_salesperson[i][j] ; 
				product_salesperson[i][5] += product_salesperson[i][j] ; 
				product_salesperson[6][5] += product_salesperson[i][j] ; 
			}

		}


	}

	puts("") ;

	printf("\n\n ___________ Total sales of all product : ___________ \n\n") ; 
	printf("                                          Row : Product # \n" ) ; 
	printf("                                   Column : SalesPerson # \n");
	printf("                LastRow : Total sales by each SalesPerson \n");
	printf("            LastColumn : Total sales of a given Product # \n");
	printf("Last item of Last (row/Column) : Grand Total of all sales \n\n");
	for ( size_t i = 0 ; i < 7 ; i++ ) {
		for ( size_t j = 0 ; j < 6 ; j++ ) {
			
			if ( j == 0 ) printf("%6d  |" , product_salesperson[i][j] );
			else {
			printf("%6d ", product_salesperson[i][j]  );
			}
		}
		if ( i == 0 ) printf("\n-------------------------------------------------") ;
		printf("\n");
	}

}
