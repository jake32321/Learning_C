#include <stdio.h>

int main(void){
	//Creates the doubles needed for the function
	double a = 10.0, b = 5.0, c = 2.0, z;
	
	//First demonstration of order of operations
	z = a+b/c;
	printf("The total is: %lf \n", z);
	
	//Second demonstration of order of operations
	z = (a+b)/c;
	printf("The total is: %lf \n", z);
	return 0;
}