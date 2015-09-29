#include <stdio.h>

int main(void){
	int a = 100, b = 2, c = 25, d = 4, result;
	
	result = a - b; //Shows subtraction
	printf("a - b = %i \n", result);
	
	result = a * b; //Shows multiplication
	printf("a * b = %i \n", result);

	result = a / c; //Shows division
	printf("a / c = %i \n", result);
	
	result = a * d / c; //Shows precedence 
	printf("a * d / c = %i \n", result);

 	return 0;
}