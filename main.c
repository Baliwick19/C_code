// p2_22 odd_even 

#include <stdio.h>

int main(){

    int number ;

    printf("Enter an Integer: ") ;
    scanf("%d", &number ) ;

    if ( number % 2 == 0 ) {
        printf("%d is an even number.", number ) ;
    }
        if ( number % 2 != 0 ) {
        printf("%d is an odd number.", number ) ;
    }



}
