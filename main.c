/* p3_41 circle */ 


#include <stdio.h>

int main(){
	
	double PI = 3.14159, radius ; 

	printf("Enter the radius: ");
	scanf("%lf", &radius ); 

	printf("Diameter :  %.2lf\n",2 * radius ); 
	printf("Circumference : %.2lf\n", 2 * PI * radius );
	printf("Area : %.2lf", PI * radius * radius );

	
}
