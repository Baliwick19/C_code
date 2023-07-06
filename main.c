/* p4_19 calculating_sales */ 


#include <stddef.h>
#include <stdio.h>
int main(){

	int product_number = 1 ; 

	double retail_price, total_sales = 0  ; 

	for ( ; product_number <= 5 ; product_number++ ) {

		int qauntity = 0 ; 

		printf("\n\n___________________________ Product Number [ %d ] ___________________________ \n\n", product_number);

		switch ( product_number ) {

			case 1 : 

				retail_price = 2.98 ; 
				break; 

			case 2 :

				retail_price = 4.5 ; 
				break; 

			case 3 :

				retail_price = 9.98 ; 
				break;

			case 4 :

				retail_price = 4.49 ; 
				break;

			case 5 :

				retail_price = 6.87 ; 
				break; 
		}

		for ( size_t i = 1 ; i <= 7 ; i++ ){

			printf("Enter qauntity sold on day %zu: ", i);
			scanf("%d", &qauntity);

			total_sales += qauntity * retail_price ; 
		}

	}

	printf("\nTotal retail value of all Product sold last week : $ %lf\n\n", total_sales );

	return 0 ;
}
