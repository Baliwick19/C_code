/* p6_8 p6_8_statements */ 

/*

	a) a[4] *= 3 ; 
		printf("%d", a[4]) ; 

	b) int total = 0 ; 
		for ( int i = 0 ; i < 10 ; i++ ) {
			total += n[i] ; 
	   }

	c) for ( size_t i = 0 ; i < 3 ; i++ ) {
			for ( size_t j = 0 ; j < 3 ; j++ ){
				m[i][j] = 3 ; 
			}
      }

	d) int largest = sales[0][0], smallest = sales[0][0] ; 
		for ( size_t i = 0 ; i < 3 ; i++ ) {
			for ( size_t j = 0 ; j < 3 ; j++ ){
				largest = ( largest < sales[i][j] ) ? sales[i][j] : largest ;
				smallest = ( smallest > sales[i][j] ) ? sales[i][j] : smallest ; 
			}
	   } 

	e) for ( size_t i = 0 ; i < 100 ; i++ ) {
			new_array[i+100] = old_array[i] ; 
	   }

	f) double d1[100], d2[100], sum[100], difference[100] ;
		for ( size_t i = 0 ; i < 100 ; i++ ) {
			sum[i] = d1[i] + d2[i] ; 
			difference[i] = d1[i] - d2[i] ; 
	   }

*/
