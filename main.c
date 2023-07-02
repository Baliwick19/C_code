/* p3_45 sides_of_a_right_triangle */ 

#include <stdio.h>

int main(){

	int side1, side2, side3 ; 

	printf("Enter sides of a triangle : ");
	scanf("%d %d %d", &side1, &side2, &side3);

	if ( side1*side1 + side2*side2 == side3*side3 ) {
		printf("Right angle triangle");
	}
	else if ( side1*side1 + side3*side3 == side2*side2  ){	
		printf("Right angle triangle");
	}
	else if ( side3*side3 + side2*side2 == side1*side1  ){	
		printf("Right angle triangle");
	}
	else {
		printf("Not a right angle triangle");
	}

	return 0 ;
}
