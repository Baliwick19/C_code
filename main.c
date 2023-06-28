// p2_27 summing_the_digits_of_an_integer

#include <stdio.h>

int main(){

    int number ;

    printf("Enter an Integer: ") ;
    scanf("%d", &number ) ;

    printf("Sum : %d", number/1000 + (number/100)%10 + (number/10)%10 + number%10 ) ;

    return 0 ; 

}
