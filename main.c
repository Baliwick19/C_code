/* p4_5 erros */ 

/*

	a) ____________________________________

	for (a = 25, a <= 1, a--); {
			printf("%d\n", a);
	}
						v   v   v     v
->  for (a = 25; a >= 1; a--) {
			printf("%d\n", a);
	}

	b) ____________________________________

	switch (value) {
		case (value % 2 == 0):
			puts("Even integer");
		case (value % 2 != 0):
			puts("Odd integer");
	}

=>	error: case label does not reduce to an integer constant
                v 
-> switch ( value % 2 ) {
				v	
		case (0):
			puts("Even integer");
 -->	   break ; 
			   v
		case (1):
			puts("Odd integer");
  -->    break ;
	}

	c) ____________________________________

	for (int year = 1; year <= 10; ++year) { 
		double salary += salary * 0.05;
	}
	printf("%4u%21.2f\n", year, salary);

=> To print value of variable year and salary, there scope must be outside for loop. Also salary must be initialised to 0.
	
-> unsigned int year = 1 ;                         <--
	double salary = 0 ;                             <--
	for ( ; year <= 10; ++year) {                   <--
		salary += salary * 0.05;                     <--              
	}
	printf("%4u%21.2lf\n", year, salary);
						 ^
	d) ____________________________________
	
	for (double y = 7.11; y != 7.20; y += .01)
		printf("%7.2f\n", y);

=> represntational error. 

         v       v         v        v  
-> for (int y = 711; y != 720; y += 1)
      printf("%7.2f\n", y/100.0);
                            ^
	e) ____________________________________

   for (int x=3; x <=100, x%3==0; x++) {
		printf("%d\n", x); 
	}
                           v
-> for (int x = 3; x <= 100 ; x++) {
		if ( x % 3 == 0 ) {      <--
			printf("%d\n", x); 
		}
	} 

	f) ____________________________________
	
	x = 1;
	While (x <= 10) { 
		printf("%d\n", x);
	}

-> x = 1 ; 
	While (x <= 10) {
		printf("%d\n", x); 
		x++ ;                           <-- incrementer 
	}
	
	g) ____________________________________

	for (x = 1; x == 50; ++x); {
		sum =+ x * x;
	}
        
		   v           v          v 
-> for (int x = 1; x <= 50; ++x) {
		sum += x * x;
		    ^    
	}	 






*/
