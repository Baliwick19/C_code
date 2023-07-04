/* p4_9	sum_and_average_of_integers  */ 


#include <math.h>
#include <stdio.h>

int main(){
	
	int number_of_data = 0 ; 

	printf("Enter the number of data: "); 
	scanf("%d", &number_of_data); 
	int i = 1 ; 
	int sum = 0 ; 
	int data = 0 ; 
	while ( i <= number_of_data ) {
		printf("Enter the data (%d): ", i);
		scanf("%d", &data); 
		sum += data ; 
		i++ ; 
	}

	printf("\nSum of %d given numbers: %d\n", number_of_data, sum );
	printf("Average : %.2lf", (double) sum / number_of_data );

	return 0 ; 

}
