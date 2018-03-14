#include <stdio.h>

/*
	Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. 
	Print the employee's ID and salary (with two decimal places) of a particular month.
*/

int main(int argc, char **argv){
	char id[10];
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	
	printf("Input the working hrs: ");
	int hours = 0;
	scanf("%d", &hours);
	
	printf("Salary amount/hr: ");
	double salary = 0;
	scanf("%lf", &salary);
	double value = hours*salary;
	
	printf("Employees ID = %s\nSalary = U$ %.2lf", id, value);
	
	return 0;
}
