/* p4_28 weekly_pay */ 


#include <inttypes.h>
#include <stdio.h>
int main(){
	
	int paycode = 0 ; 
	int number_of_hours_worked = 0 ; 
	int gross_weekly_sales = 0 ; 
	int number_of_items_produced = 0 ;

	printf("Enter Paycode: "); 
	scanf("%d", &paycode);

	switch ( paycode ) {
	
		case 1 : 

			printf("\n\n_________________________ Manager _________________________ \n\n");


			printf("Weekly salary as manager: $%d ", 35672);
			break;

		case 2 :
			printf("\n\n_________________________ Hourly uorkers_________________________ \n\n");
			printf("Total hours worked :");
			scanf("%d", &number_of_hours_worked);
			printf("\n\nTotal weekly wage as hourly workers : $ %lf", ( number_of_hours_worked <= 40 ) ? number_of_hours_worked* 30 : ( number_of_hours_worked + 0.5 ) * 30 );
			break;

		case 3 :
			printf("\n\n_________________________ Commission Worker _________________________ \n\n");
			printf("Enter your Gross weely sales : ");
			scanf("%d", &gross_weekly_sales);
		   printf("\n\nYour weely salary as commission worker : $ %lf", 250 + gross_weekly_sales * 0.057);
			break;

		case 4 : 
			printf("\n\n_________________________ PieceWorker _________________________ \n\n");
			printf("Enter number of items produced : ");
			scanf("%d", &number_of_items_produced );

			printf("\n\nYour weely salary as pieceworker : $ %d ", number_of_items_produced * 5 ); 
			break; 

		default : 
			printf("Enter Valid Paycode.");
	}
}
