#include <stdio.h>

/*	a program that prints its input one word per line	*/

#define IN 1
#define OUT 0


int main(){

	int c, nl, nw, nc, state;
	
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
		nc++;
		if (c != '\n') 
			putchar(c);
		
		if (c == '\n') {
			nl++;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state	= OUT;
			printf("\n");
		}
		else if (state == OUT) {
			state = IN;
			nw++;
	 }
	}
	
}
