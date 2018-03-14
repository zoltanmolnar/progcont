#include <stdio.h>

/*
	Write a C program to print the following characters in a reverse way.
	Test Characters: 'X', 'M', 'L'
	Expected Output:
	The reverse of XML is LMX
*/

int main(int argc, char **argv){
	char myString[] = "XML";
 	for(int i = sizeof(myString)-2; i >= 0; i--){
		printf("%c",myString[i]);
	}
	return 0;
}
