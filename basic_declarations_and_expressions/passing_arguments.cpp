#include <stdio.h>

/*
	Display any arguments that 
	were passed to it.
*/

int main(int argc, char **argv){
	int i = 0;
	for(i; i < argc; i++){
		printf("argc: %d, argv[%d] is %s\n", argc, i, argv[i]);
	}
	return 0;
}
