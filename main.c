/* p6_14 p6_14_union_of_sets */ 


#include <stdio.h>

void uNion(int [], int [], int ) ; 

void uNion(int a[], int b[], int size ){

	int length = 1 ; 
	int uNion[30] ;
	uNion[0] = a[0] ; 

	int j = 0 ; 
	int flag = 1 ; 
	for ( int i = 0 ; i < size ; i++ ) {

		flag = 1 ; 
		for ( j = 0 ; j < length ; j++ ) {
			if ( ( i < 10 ) ? uNion[j] == a[i] : uNion[j] == b[i-10] ){
				flag = 0 ; 
				j = length ; 
			}
		}

		if ( flag == 1 ) { 
			uNion[length++] = ( i < 10 ) ? a[i] : b[i-10] ;  
		}
	}

	for ( int k = 0 ; k < length ; k++ ) {
		printf("%d ", uNion[k]);
	}

	puts("") ; 

}

int main(){

	int array1[10] = {0,0,0,0,0,0,0,0,0,0} ; 
	int array2[10] = {0,0,0,0,0,0,0,0,0,0} ; 

	uNion( array1, array2, 20 ) ; 
}
