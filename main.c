/* p4_29 de_morgans_law */ 



#include <stdio.h>
int main(){
	
	int x = 4, y = 8, a = 2, b = 2, g = 5, i = 3, j = 5 ; 

	printf("%d = %d \n", !(x < 5) && !(y >= 7),  !((x < 5) || (y >= 7)));
	printf("%d = %d \n",  !(a == b) || !(g != 5) ,  !((a == b) && (g != 5)) );
	printf("%d = %d \n",  !((x <= 8) && (y > 4)),  !(((x <= 8) || !(y > 4))));
	printf("%d = %d \n", !((i > 4) || (j <= 6)) , !(i > 4) && !(j <= 6));
	
	return 0 ;
}
