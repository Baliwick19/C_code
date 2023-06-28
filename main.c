// p2_28 target_heart_rate_calculator

#include <stdio.h>

int main(){
    
    unsigned int age ; 

    printf("Enter your age: ") ;
    scanf("%d", &age ) ;

    int max_heart_rate = 220 - age ;

    printf("Maximum heart rate: %d\n\n", max_heart_rate ) ;

    double r_min, r_max ; 

    r_min = max_heart_rate * 0.50 ; 

    r_max = max_heart_rate * 0.85 ; 

    printf("Range of your target heart rate: %.2lf - %.2lf ", r_min, r_max ) ;

    return 0 ;
    
}
