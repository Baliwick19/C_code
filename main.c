/* p6_21 p6_21_matrix_multiplication */ 

#include <stddef.h>
#include <stdio.h>

int main(){

	int n, m1, m2, p ; 

	printf("\nEnter order of matrix 1 ( m x n ): ");
	scanf("%d x %d", &n, &m1);

	printf("\nEnter order of matrix 2: ");
	scanf("%d x %d", &m2, &p);

	if ( m1 != m2 ){ 
		printf("\nEnter valid matrix 2 order")  ; 
	}
	else{
		int matrix1[n][m1], matrix2[m2][p], matrix3[n][p] ; 

		printf("\nEnter matrix1 ( %d x %d ) values:\n\n", n, m1);

		for ( size_t i = 0 ; i < n ; i++ ) {
			for ( size_t j = 0 ; j < m1 ; j++ ) {
				printf("[%zu,%zu] = ", i+1, j+1 );
				scanf("%d", &matrix1[i][j]);
			}
			puts("");
		}
		printf("\nEnter matrix2 ( %d x %d ) values:\n\n", m2, p);

		for ( size_t i = 0 ; i < m2 ; i++ ) {
			for ( size_t j = 0 ; j < p ; j++ ) {
				printf("[%zu,%zu] = ", i+1, j+1 );
				scanf("%d", &matrix2[i][j]);
			}
			puts("");
		}


		for ( size_t i = 0 ; i < n ; i++ ) {
			for ( size_t j = 0 ; j < p ; j++ ) {
				matrix3[i][j] = 0 ; 
			}
		}

		for ( size_t i = 0 ; i < n ; i++ ) {
			for ( size_t j = 0 ; j < p ; j++ ) {
				for ( size_t k = 0 ;  k < m1 ; k++ ) {
					matrix3[i][j] += matrix1[i][k] * matrix2[k][j] ; 
				}
			}
		}

		printf("\n\n[A] : \n\n");
		for ( size_t i = 0 ; i < n ; i++ ) {
			for ( size_t j = 0 ; j < m1 ; j++ ) {
				printf("%d ", matrix1[i][j])  ; 
			}
			puts("") ; 
		}

		printf("\n\n[B] : \n\n");
		for ( size_t i = 0 ; i < m1 ; i++ ) {
			for ( size_t j = 0 ; j < p ; j++ ) {
				printf("%d ", matrix2[i][j])  ; 
			}
			puts("") ; 
		}

		printf("\n\n[C] = [A] X [B] : \n\n");
		for ( size_t i = 0 ; i < n ; i++ ) {
			for ( size_t j = 0 ; j < p ; j++ ) {
				printf("%d ", matrix3[i][j])  ; 
			}
			puts("") ; 
		}


	}

}
