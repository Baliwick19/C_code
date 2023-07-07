/* p4_38 p4_38_christmas */ 

#include <stdio.h>
int main(){

	printf("\n\n");
	for ( int i = 1 ; i <= 12 ; i++ ){
		
		printf("On the ");

		switch ( i ) {
			case 1  : printf("%s", "first"	) ; i = 13 ; break;
			case 2  : printf("%s", "second"	) ; break;
			case 3  : printf("%s", "third"	) ; break;
			case 4  : printf("%s", "fourth"	) ; break;
			case 5  : printf("%s", "fifth"	) ; break;
			case 6  : printf("%s", "sixth"	) ; break;
			case 7  : printf("%s", "seventh" ) ; break;
			case 8  : printf("%s", "eight"   ) ; break;
			case 9  : printf("%s", "nineth"  ) ; break;
			case 10 : printf("%s", "tenth"   ) ; break;
			case 11 : printf("%s", "eleventh") ; break;
			case 12 : printf("%s", "twelfth" ) ; break;
		}

		printf(" day of christmas\nmy true love sent to me:\n");
		
		switch ( i ) {
			case 12 : printf("%s", "12 Drummers Drumming					\n") ;
			case 11 : printf("%s", "11 Pipers Piping						\n") ;
			case 10 : printf("%s", "10 Lords a Leaping					\n") ;
			case  9 : printf("%s", "9 Ladies Dancing						\n") ;
			case  8 : printf("%s", "8 Maids a Milking				      \n") ;
			case  7 : printf("%s", "7 Swans a Swimming			      \n") ;
			case  6 : printf("%s", "6 Geese a Laying					   \n") ;
			case  5 : printf("%s", "5 Golden Ribgs						   \n") ;
			case  4 : printf("%s", "4 Calling Birds					   \n") ;
			case  3 : printf("%s", "3 French Hens				         \n") ;
			case  2 : printf("%s", "2 Turtle Doves							\n") ; 
			case  1 : printf("%s", "and a Partridge in a Pear Tree   \n") ; break;
			default : printf("%s", "A Partridge in a Pear Tree       \n") ; i = 1 ; break; 
		}

		printf("\n\n");

	}
}
