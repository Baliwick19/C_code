// p3_27  validating_user_input

#include <stdio.h>

int main(void) {
	int student = 1, passes = 0, failures = 0 ; 

	while (student <= 10) {
		printf("%s", "Enter result (1=pass,2=fail): ");
		int result = 0;
		scanf("%d", &result);

		if (result == 1) { 
			passes++;
		}
		else { 
			failures++ ;
		}

		student++;
	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if (passes > 8) {
		puts("Bonus to instructor!");
	}
}
