#include <stdio.h>

/*
	Write a C program to display multiple variables. Go to the editor
	Sample Variables :
	a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
	Declaration :
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890; 
*/

int main(int argc, char **argv){
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890; 
	printf("a+c = %d\n", a+b);
	printf("x+c = %2f\n", x+c);
	printf("xd+x = %2f\n", dx+x);
	printf("((int) dx) + ax = %2d\n",(int)dx + ax);
	printf("a + x = %2f\n", a + x);
	printf("s + b = %d\n", s + b);
	printf("ax + b = %d\n", ax + b);
	printf("s + c = %d\n", s + c);
	printf("ax + c = %d\n", ax + c);
	printf("ax + ux = %lu\n", ax + ux);
	return 0;
}
