#include <stdio.h>

/*
	Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
	Expected Output:
	Perimeter of the Circle = 37.680000 inches
	Area of the Circle = 113.040001 square inches
*/

#define PI 3.14159265359

int main(int argc, char **argv){
	printf("Perimeter of the Circle = %.6f inches\n", 2*6*PI);
	printf("Area of the Circle = %.6f inches", PI*(6*6));
	return 0;
}
