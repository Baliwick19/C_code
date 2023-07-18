/* p6_18 p6_18_foloowing */ 

#include <stdio.h>
#define MAX 10

void functionName(const int b[], size_t startSubscript, size_t size);

int main(void) 
{

	int p[MAX] = {10, 7, 2, 1, 0, 4, 3, 0, 6, 8}; 

	puts("Answer is:");
	functionName(p, 0, MAX); 
	puts("");
}  

void functionName(const int b[], size_t startSubscript, size_t size)
{
	if (startSubscript < size) {
		functionName(b, startSubscript + 1, size);
		printf("%d ", b[startSubscript] * 5);
	}  
}


// Above program is multiplying all elements of array p with 5 and display it in reverse order. 
