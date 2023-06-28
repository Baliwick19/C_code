// p2_29.1.2 sort_in_ascending_order 

#include <stdio.h> 


int main(){

    int a, b, c ;

    printf("Enter three integers: ") ;
    scanf("%d %d %d", &a, &b, &c ) ;

    if ( a <= b ) { if ( b <= c ) { printf("Ascending order: %d, %d, %d ", a, b, c) ; } } ;
    if ( a <= c ) { if ( c <= b ) { printf("Ascending order: %d, %d, %d ", a, c, b) ; } } ;
    if ( b <= a ) { if ( a <= c ) { printf("Ascending order: %d, %d, %d ", b, a, c) ; } } ;
    if ( b <= c ) { if ( c <= a ) { printf("Ascending order: %d, %d, %d ", b, c, a) ; } } ;
    if ( c <= a ) { if ( a <= b ) { printf("Ascending order: %d, %d, %d ", c, a, b) ; } } ;
    if ( c <= b ) { if ( b <= a ) { printf("Ascending order: %d, %d, %d ", c, b, a) ; } } ;

    return 0 ;
}   
