// p2_29.2 sort_in_ascending_order

#include<stdio.h>

int main(){

  int a[3] = {437, 5789, 23} ;
  int s, m , l ;

  if( a[0] >= a[1] ){
    s = a[1];                    // 2 
    l = a[0] ;                   // 5
  } 
  if ( a[0] <= a[1] ){
    s = a[0];  
    l = a[1];  
  }
  if ( s >= a[2] ){
    s = a[2] ;                    // 1
    if ( a[1] >=  a[0]){
      l = a[1] ;
      m = a[0] ;
    }
    if ( a[0] >=  a[1]){
      m = a[1] ;
      l = a[0] ;
    }
  }
  if ( l <= a[2] ){
    l = a[2] ;  
    if ( a[1] >=  a[0]){
      s = a[0] ;
      m = a[1] ;
    }
    if ( a[0] >=  a[1]){
      m = a[0] ;
      s = a[1] ;
    }
  }

  printf("%d, %d, %d", s, m, l) ;

  return 0 ;
  
}
