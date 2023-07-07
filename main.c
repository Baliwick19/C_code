/* p4_32 modify_diamond */ 



#include <stdio.h>
#include <wctype.h>
int main(){
	
	int size = 0 ; 

	printf("Enter size: " );
	scanf("%d", &size );
	int k = 0 ; 
	size++ ; 
	for ( int i = 1 ; i <= size    ;  i++ ) {
		( i > size / 2 ) ? ( k = size - i ) : ( k = i ) ; 
		for ( int j = 1 ; j <= size / 2 + k ; j++ ) {
			printf( ( j <= size / 2  - k + 1   ) ? " " : "*" );
		}
		printf("\n");
		
	}
}
