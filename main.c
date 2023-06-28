// p2_18 comparing values 

#include <stdio.h>

int main(){

    int highest_record, current_record ;

    printf("Enter the highest rainfall ever recorded in one season for your country and current record of rainfall : ") ;
    scanf("%d %d", &highest_record, &current_record ) ;

    if ( highest_record > current_record ){
        printf("Current rainfall record doesn't exceed highest rainfall recorded in your country.\n") ;
    }
    if ( highest_record < current_record ){
        highest_record = current_record ; 
    }

    return 0 ; 
}
