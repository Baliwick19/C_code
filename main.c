/* p5_17 p5_17_sides_of_a_right_triangle */ 

#include <stdio.h>

int right_angle_triangle ( int, int, int ) ; 

int right_angle_triangle ( int a, int b, int c ) { 
	int flag = 0 ; 
	if ( a + b > c && ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ) ) flag = 1 ;
	return  flag ;
}

int main(){
	int a, b, c ; 

	printf("Enter side1, side2 and side3 : "); 
	scanf("%d %d %d", &a, &b, &c); 

	printf("%d\n", right_angle_triangle(a, b, c));

}
