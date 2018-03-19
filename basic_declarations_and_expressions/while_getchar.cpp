#include <stdio.h>

/*
	the while loop with break and getchar() 
*/

int main(int argc, char **argv){
	char c = ' ';
	int i = 0;
	printf("getchar() with while loop... \n");
	while(c != 'y'){
		printf("Enter y or n: ");
		c = getchar();
		getchar();
	}
	while(i < 10){
		if(i == 8)
			break;
		if(i == 4)
			continue;	
		printf("I is: %d\n", i);
		i++;
	}
	return 0;
}
