/* p3_44 sides_of_a_triangle */ 

#include <stdio.h>

int main(){
	
	int side1, side2, side3 ; 

	printf("Enter sides of a triangle : ");
	scanf("%d %d %d", &side1, &side2, &side3);

	printf(( side1 + side2 > side3 ) ? "Valid sides" : "Invalid sides");

	return 0 ;
}
