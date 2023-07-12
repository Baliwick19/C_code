/* p5_30 p5_30_quality_points */ 


#include <stdio.h>

int qualityPoints ( double ) ; 

int qualityPoints ( double average ) {
	int point = 0 ; 

	if ( average >= 90 ) point = 4 ; 
	else if ( average >= 80 ) point = 3 ;
	else if ( average >= 70 ) point = 2 ; 
	else if ( average >= 60 ) point = 1 ; 
	else point = 0 ;

	return  point ;
}

int main(){
	double average = 0.0 ; 

	printf("Enter the average : ");
	scanf("%lf", &average);

	printf("\nPoints : %d\n", qualityPoints( average ));

	return  0 ;
}
