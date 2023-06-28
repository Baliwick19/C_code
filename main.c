// p2_19 arithmetic_large_small 

#include <stdio.h>

int main(){

    int num1, num2, num3 ; 

    printf("Enter three different integers: ") ;
    scanf("%d %d %d", &num1, &num2, &num3) ;

    printf("Sum is %d\n", num1 + num2 + num3 ) ;
    printf("Average is %d\n", ( num1 + num2 + num3 ) / 3  ) ;
    printf("Product is %d\n", num1 * num2 * num3 ) ;

    // to find largets and smallest among three integers 

    int smallest, largest ;

    if ( num1 >= num2 ){
        largest = num1 ;
        smallest = num2 ; 
    }
    if ( num2 >= num1 ){
        largest = num2 ;
        smallest = num1 ; 
    }
    if ( largest <= num3 ){
        largest = num3 ;
    }
    if (smallest >= num3 ){
        smallest = num3 ;
    }

    printf("Samllest is %d\n", smallest );
    printf("Largest is %d\n", largest) ;

    return 0 ;
}
