
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 1001

void main(){

	FILE * fd;
	fd = fopen("rosalind_rna.txt","r");

	if ( fd == NULL ){
		printf("could not open file");
		exit(1);
	}

	char c;

	do {
		c = fgetc(fd);
		if (c == 'T'){
			printf("U");
		} else {
			printf("%c",c);
		}
	}
	while (c != EOF);
	
	printf("\n");

}
