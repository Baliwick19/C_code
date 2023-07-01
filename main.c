/* p3_31 another_dangling_else_problem */ 

#include <stdio.h>

int main(){

	int x = 5, y = 8; 

	printf("\n\nb)  x = 5 and y = 8 \n\n");

	if (y == 8){
		if (x == 5)
			puts("@@@@@");
		else
			puts("#####");
	}
	puts("$$$$$");
	puts("&&&&&");

	printf("\n\nb)  x = 5 and y = 8 \n\n");

	if (y == 8){
		if (x == 5){
			puts("@@@@@");
		}
		else{
			puts("#####");
			puts("$$$$$");
			puts("&&&&&");
		}
	}

	printf("\n\nb)  x = 5 and y = 8 \n\n");

	if (y == 8){
		if (x == 5){
			puts("@@@@@");
		}
		else{
			puts("#####");
			puts("$$$$$");
		}
	}
	puts("&&&&&");

	printf("\n\nb)  x = 5 and y = 7 \n\n");
	y = 7 ; 

	if (y == 8){
		if (x == 5)
			puts("@@@@@");
	}
	else{
		puts("#####");
		puts("$$$$$");
		puts("&&&&&");
	}
}
