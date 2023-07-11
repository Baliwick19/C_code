/* p5_23 p5_23_time_in_seconds */ 



#include <stdio.h>
#include <time.h>

int time_in_seconds ( int, int, int ) ; 

int time_in_seconds ( int hours, int min, int sec ) {
	int seconds = hours * 3600 + min * 60 + sec ; 
	return seconds % 43200 ;
}

int main(){

	int hours, min, sec ; 
	int diff = 0 ; 
	int i = 1 ; 

	while ( i < 3 ) { 

		printf("Enter time in hours, minutes and seconds: ");
		scanf("%d %d %d", &hours, &min, &sec );

		// printf("%d\n", time_in_seconds( hours, min, sec));

		int seconds = time_in_seconds(hours, min, sec) ;  
		diff += ( i == 1 ) ? seconds : -seconds ;  
		i++ ; 

	}

	if ( diff < 0 ) diff *= -1 ; 

	printf("\n%d\n", diff);
	return  0 ;

}
