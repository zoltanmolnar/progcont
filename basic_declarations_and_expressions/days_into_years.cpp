#include <stdio.h>

/*
	Write a C program to convert specified days into years, weeks and days.
	Note: Ignore leap year. 
*/

int main(int argc, char **argv){
 	int day = 1319;
 	int years = day / 365;
 	int weeks = (day % 365) / 7;
 	int days = day - ((years*365) + (weeks * 7));
 	printf("Year(s): %d, Week(s): %d, Day(s): %d", years, weeks, days);
	return 0;
}
