// To calculate the product of three integers.

#include <stdio.h>

int main(){

    printf("Enter three integers: ") ;

    int x = 0 ; 
    int y = 0 ; 
    int z = 0 ;

    scanf("%d %d %d", &x, &y, &z) ;

    int product = x * y * z ; 
    
    printf("The product is %d", product);

}
