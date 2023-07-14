/* p5_36 p5_36_tower_of_hanoi */ 


#include <stdio.h>


void hanoi ( int, int, int, int ) ; 

void hanoi ( int n, int i, int f, int t ) {
	if (n == 1)
	{
		printf("%d -> %d\n", i, f);
		return;
	}
	hanoi ( n - 1, i, t, f ) ; 
	printf("%d -> %d\n", i, f);
	hanoi ( n - 1, t, f, i ) ; 
}

int main(){

	hanoi( 3, 1, 3, 2);
	return 0 ;
}
