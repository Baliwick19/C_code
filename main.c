/* p5_9 p5_9_car_rental_services */ 

#include <stdio.h>

double car_rental_services ( int ) ; 

static double total_charge = 0 ; 

double car_rental_services ( int hours ) { 

	double charge = 0 ;
	double service_tax = hours * 0.5 ; 

	if ( hours < 12 ) { 
		charge = ( hours / 8 == 0 ) ? 25 : 25 + ( hours - 8 ) * 5 ;  
	}  
	else if ( hours >= 12 && hours < 24 ) {
		charge =  ( hours / 12 ) * 50 + ( hours - 12 ) * 5 ; 	
	}
	else if ( hours == 24 ) { 
		charge = 50 ; 
	}
	else if ( hours % 24 == 0 ) { 
		charge = ( hours / 24 ) * 50 ; 
	}
	else {
		charge = ( hours / 24 ) * 50 + ( hours - 24 ) * 5 ; 
	}

	charge += service_tax ; 

	total_charge += charge ; 

	return charge ;
}

int main(){

	int number_of_hours1 = 0 , number_of_hours2 = 0, number_of_hours3 = 0 ; 

	printf("\n\nEnter number of hours: ");
	scanf("%d %d %d", &number_of_hours1, &number_of_hours2, &number_of_hours3 );

	printf("\n\n%6s %6s %10s\n\n", "Car", "Hours", "Charge" );

	printf("%6s %6d %10.2lf\n", "1", number_of_hours1, car_rental_services( number_of_hours1 ));
	printf("%6s %6d %10.2lf\n", "2", number_of_hours2, car_rental_services( number_of_hours2 ));
	printf("%6s %6d %10.2lf\n\n", "3", number_of_hours3, car_rental_services( number_of_hours3 ));

	printf("%6s %6d %10.2lf\n", "Total", number_of_hours1 + number_of_hours2 + number_of_hours3, total_charge );

}
