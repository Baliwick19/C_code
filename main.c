/* p4_30 replacing_switch_with_if_else */ 


#include <stdio.h>

int main(void) {
	int aCount = 0;
	int bCount = 0; 
	int cCount = 0; 
	int dCount = 0; 
	int fCount = 0; 

	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");
	int grade = 0; 

	while ((grade = getchar()) != EOF) {


		if      ( grade == 'a' || grade == 'A' ) ++aCount ;
		else if ( grade == 'b' || grade == 'B' ) ++bCount ;
		else if ( grade == 'c' || grade == 'C' ) ++cCount ;
		else if ( grade == 'd' || grade == 'D' ) ++dCount ;
		else if ( grade == 'f' || grade == 'F' ) ++fCount ;
		else if ( grade == '\n'|| grade == '\t' || grade == ' ' );  
		else printf("Incorrect letter grade entered. _%c_", grade); 
		if (( grade != '\n' && grade != '\t' && grade != ' ' )) puts("\nEnter a new grade."); 

		/* if      ( grade == 'a' || grade == 'A' ) ++aCount ; */
		/* if ( grade == 'b' || grade == 'B' ) ++bCount ; */
		/* if ( grade == 'c' || grade == 'C' ) ++cCount ; */
		/* if ( grade == 'd' || grade == 'D' ) ++dCount ; */
		/* if ( grade == 'f' || grade == 'F' ) ++fCount ; */
		/* if ( grade == '\n'|| grade == '\t' || grade == ' ' ) {;} */  
		/* if (  grade != 'a'  && grade != 'A'  &&  grade != 'b'  && grade != 'B'  && grade != 'c'  && grade != 'C'  &&  grade != 'd'  && grade != 'D'  &&  grade != 'f'  && grade != 'F' && grade != '\n' && grade != '\t' && grade != ' ' ){ */ 
		/* 	printf("Incorrect letter grade entered. _%c_", grade); } */ 
		/* if (( grade != '\n' && grade != '\t' && grade != ' ' )) puts("\nEnter a new grade."); */ 

	} 

	puts("\nTotals for each letter grade are:");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount); 
	printf("C: %d\n", cCount); 
	printf("D: %d\n", dCount); 
	printf("F: %d\n", fCount); 
}
