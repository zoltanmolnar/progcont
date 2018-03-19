#include <stdio.h>

/*
	Array initialization 
*/

int intarray[5];
double doublearray[] = {0.0, 2.3, 3.4, 6.6, 88.4};

int main(int argc, char **argv){
	int i = 0;
	
	intarray[0] = 1;
	intarray[1] = 11;
	intarray[2] = 21;
	intarray[3] = 31;
	intarray[4] = 40;
	printf("Intarray: \n");
	for(i; i<= 4; i++){
		printf("%d\n", intarray[i]);
	}
	printf("The integer at intrray[3] is %d", intarray[3]);
	printf("\nDoublearray:\n");
	for(i = 0; i<= sizeof(doublearray)/sizeof(double) - 1; i++){
		printf("%.2f\n", doublearray[i]);
	}
	printf("The double at doublearray[2] is %.2f", doublearray[2]);

	return 0;
}

