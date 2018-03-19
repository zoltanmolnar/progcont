#include <stdio.h>

/*
	Using the fgets function
*/

void get_input_with_fgets(){
	char firstname[5],
		lastname[5];
		
	printf("Your first name: ");
	fgets(firstname, 5, stdin);
	fflush(stdin);
	printf("Your last name: ");
	fgets(lastname, 5, stdin);
	fflush(stdin);
	
	printf("First name: %s\nLast name: %s", firstname, lastname);
}


int main(int argc, char **argv){
	
	get_input_with_fgets();
	return 0;
}
