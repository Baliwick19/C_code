/* p6_16 p6_16_label */ 

#include <stdio.h>

int main(){

	int sales[3][5] ;

	for (size_t row = 0; row <= 2; ++row) {
		for (size_t column = 0; column <= 4; ++column) {
			sales[row][column] = 0;
			printf("sales[%zu][%zu] ", row, column) ; 
		}
		puts("");
	}

}
