#include <stdio.h>

/*
	Write a C program that accepts two integers from the user and calculate the product of the two integers.
	Test Data :
	Input the first integer: 25
	Input the second integer: 38
	Expected Output:
	Sum of the above two integers = 63 
*/

int main(int argc, char **argv){
	printf("Input the first integer: ");
	int a = 0;
	scanf("%d",&a);
	printf("Input the second integer: ");
	int b = 0;
	scanf("%d",&b);
	printf("Sum of the above two integers = %d", a*b);
	return 0;
}
