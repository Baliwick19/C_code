/* p4_17 credit_limits */ 

#include <iso646.h>
#include <stdio.h>

int main(){

	int account_num, credit_limit_before, current_balance ; 


	for ( int i = 1 ; i <= 3 ; i++ ) {
		
		printf("\n___________________________ Customer %d ___________________________ \n\n", i ); 

		printf("Enter account number, credit limit and current balance. ");
		scanf("%d %d %d", &account_num, &credit_limit_before, &current_balance);

		printf("Customer account number : %d\n", account_num ); 
		printf("Customer's credit limit before recession : %d\n", credit_limit_before);
		printf("Customer's current balance : %d\n\n", current_balance);

		int new_credit_limit = credit_limit_before / 2 ; 
		printf("New credit limit : %d\n", new_credit_limit ); 

		if ( current_balance > new_credit_limit ) { 
			printf("Customer %d balance exceed their credit limit.\n\n", i);
		}
	}
}
