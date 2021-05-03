
#include <stdio.h>
#include <string.h>

void main(){
	FILE * fd;
	fd = fopen("rosalind_dna.txt", "r");
	int a = 0, c = 0, g = 0, t = 0;
	int cp;

	while (1){
		cp = fgetc(fd);
		printf("%s", cp);

		if ( cp  == 'A')
			a ++; 
		else if (cp  ==  'C')
			c ++;
		else if (cp  ==  'G')
			g ++;
		else if (cp  ==  'T')
			t ++;
		else
			break;
	}

	printf("%d %d %d %d", a, c, g, t);
}
