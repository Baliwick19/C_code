/* p4_34 replace_do_while_to_while */ 

/* #include <stdio.h> */

/* int main(){ */
	


/* 	// syntax below are equivlent . */ 
	
/* 	// syntax 1 */ 
	
/* 	do { */
/* 		statement ; */ 
/* 	} while( condition ) ; */ 

/* 	// syntax 2 */ 

/* 	statement ; */ 
/* 	while ( condition ){ */
/* 		statement ; */ 
/* 	} */

/* 	// when replacing while with do while loop, the major problem would be that it will run statement at least once, but it shouldn't be if both loop to run equivlent. to exactly mimic the behaviour of while loop using do while loop it neccesay to apply a condition in if statement . */ 
	
/* 	if ( condition ){ */
/* 		do { */
/* 			statement ; */ 
/* 		} while ( condition ) ; */
/* 	} */
/* } */
