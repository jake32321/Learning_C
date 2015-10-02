#include <stdio.h>

/* Loops through the loop providing the factorial of a number */
int main(void){
	int answer = 1;
	int i;
	
	/**
	This demonstrates for, while, and do while loops 
	in the C programming language. Meant to be used solely 
	as a learning tool and has absolutely other purpose 
	than that.
	**/
	
	/* Factorial ten (10!) */
	for(i = 2; i < 10; i++){
		answer = answer * i;
	}
	printf("The answer is %d\n", answer);
	
	/* Factorial 30 (30!) */
	answer = 1;
	for(i = 2; i < 30; i++){
		answer = answer * i;
	}
	printf("The answer is %d\n", answer);
	
	/* Factorial 5 (5!) */
	answer = 1;
	for(i = 2; i < 5; i++){
		answer = answer * i;
	}
	printf("The answer is %d\n", answer);
}