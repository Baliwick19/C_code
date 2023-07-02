/* p3_34 flyod_traingle */ 

#include <stdio.h>

int main(){
	
	int size = 0 ; 
	
	printf("Enter the size : ");
	scanf("%d", &size);

	int i = 1, num = 1  ; 
	while ( i <= size ) {
		int j = 1 ;
		while ( j <= i ) {
			printf("%3d ", num );
			num++ ;
			j++ ; 
		}
		printf("\n");
		i++ ;
	}

	return 0 ;
}
