/* p4_10 converting_celcius_to_fahrenite */ 


#include <stdio.h>

int main(){
	
	int celcius = 0 ; 
	printf("%10s %10s\n", "Celcius" , "Fahrenite");
	for ( celcius = 30 ;  celcius <= 50; celcius++ ){
		printf("%10d %10.2lf\n", celcius, (9.0/5)*celcius + 32 ); 
	}
	return 0 ;
}
