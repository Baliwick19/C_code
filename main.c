/* p3_32 sqaure_of_asterisks */ 

#include <stdio.h>

int main(){
	
	printf("Enter a integer between 1 and 20 : ");
	int size = 0 ; 
	scanf("%d", &size);

	int i = 1 ; 

	while ( i <= size ) {
		int j = 1 ; 
		while ( j <= size ) {
			printf("*");
			j++ ; 
		}
		printf("\n");
		i++ ; 
	}

	return 0 ;
}
