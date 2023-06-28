// p2_23 multiples 

#include <stdio.h>

int main(){

    int number1, number2 ;

    printf("Enter two integers: ") ;
    scanf("%d %d", &number1, &number2 ) ;

    if ( !(number1 % number2) ){
        printf("%d is multiple of %d", number1, number2 ) ;
    }

    if ( number1 % number2 ){
        printf("%d is not a multiple of %d", number1, number2 ) ;
    }

    return 0 ; 

}
