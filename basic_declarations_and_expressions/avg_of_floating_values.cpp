#include <stdio.h>

/*
	Write a C program that accepts two item’s weight (floating points' values ) 
	and number of purchase (floating points' values) and calculate the 
	average value of the items.
	Test Data :
	Weight - Item1: 15
	No. of item1: 5
	Weight - Item2: 25
	No. of item2: 4
	Expected Output:
	Average Value = 19.4444
*/

int main(int argc, char **argv){
	printf("Weight - Item1: ");
	float item1_weight = 0;
	scanf("%f",&item1_weight);
	
	printf("No. of item1: ");
	float item1_no = 0;
	scanf("%f",&item1_no);
	
	printf("Weight - Item2: ");
	float item2_weight = 0;
	scanf("%f",&item2_weight);
	
	printf("Weight - Item2: ");
	float item2_no = 0;
	scanf("%f",&item2_no);
	
	printf("Average Value = %.4f", ((item1_weight * item1_no) + (item2_weight * item2_no)) / (item1_no + item2_no));
	return 0;	
}
