// p2_17 final-velocity 

#include <stdio.h>

int main(){

    int u, a, t ; 

    printf("Enter initial velocity, acceleration of object and time elapsed : ") ;
    scanf("%d %d %d", &u, &a, &t) ;

    printf("Final Velocity : %d\n", u + a * t ) ;
    printf("Distance Traversed : %d\n", u*t + a*t*t / 2  ) ; 

}
