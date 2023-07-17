/* p6_11 p6_11_selection_sort */ 


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE  30 

void selectionSort(int [], int);

void selectionSort(int a[], int size){

	puts("___________ Before Sorting ___________");

	for ( size_t i = 0 ; i < size ; i++ ) {
		printf("%4d ", a[i] );
		if ( (i+1) % 9 == 0 ) puts("") ; 
	}
	puts("");

	for ( size_t i = 0 ; i  < size - 1 ; i++ ){


		int temp = a[i] ; 
		int smallest = a[i] ; 
		int index = i ;
		size_t j = i ; 

		for (  ; j < size ; j++ ) {
			if ( a[j] < smallest ) {
				smallest = a[j] ; 
				index = j ; 
			}
		}

		a[i] = a[index] ; 
		a[index] = temp ; 
	}

	puts("___________ After Sorting ___________");

	for ( size_t i = 0 ; i < size ; i++ ) {
		printf("%4d ", a[i] );
		if ( (i+1) % 9 == 0 ) puts("") ; 
	}
	puts("");
}

int main(){

	srand(time(NULL));

	int num[SIZE] = {0} ; 
	for ( size_t i = 0 ; i < SIZE ; i++ ) {
		num[i] = rand()%1000 + 1  ;
	}


	selectionSort(num , SIZE);

}
