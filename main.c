// p2_20 time_conversion 

#include<stdio.h>

int main(){

    int seconds, hr, min, sec ; 

    printf("Enter number of seconds: ") ;
    scanf("%d", &seconds ) ;

    hr = seconds / 3600 ; 
    min = ( seconds % 3600 ) / 60 ;
    sec = ( seconds % 3600 ) % 60  ;

    // printf("%d", hr ) ; 

    printf("hr : min : sec => %d : %d : %d", hr, min, sec ) ; 

    return 0 ; 
    
}
