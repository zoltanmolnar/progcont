#include <stdio.h>
#include <stdlib.h>

/*
	Using gets and atoi
*/

int main(int argc, char **argv){
	char agestring[10];
	int age, bonus;
	
	printf("Enter your age: ");
	gets(agestring);
	age = atoi(agestring);
	if(age > 0){
		if(age > 45){
			bonus = 1000;
		}else{
			bonus = 500;
		}
	
		printf("Your age is: %d and you bonus is %d", age, bonus);
	}else{
		printf("You entered an invalid value!");
	}
	return 0;
}
