/* p4_36 p4_36following */ 

#include <stdio.h>

int main(){

	int n = 4, a = 1; 
	int i, c;
	for (i = 1; i <= n; i++) 
	{
		for (c = 1; c <= i; c++) 
		{
			printf("%d", a);
			a++ ; 
		}
		printf("\n");
	}
}


/* Output : */ 

/* 1 */
/* 23 */
/* 456 */
/* 78910 */

