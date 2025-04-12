#include <stdio.h>

/*	 program that prints a histogram of the lengths of the words in its input	*/

#define IN 1
#define OUT 0

void print_bar(int x){
	for (int i = 0; i < x ; i++){
		/* printf("%d", i+1); */
		printf("=");
	}	
	printf(">");
}

int main(){

	int c, nl, nw, nc, state;
	
	nl = nw = nc = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n' || c != ' ') {
			nc++;
		}
		else {
			nl++;
		}
		if (c == ' ' || c == '\n' || c == '\t' || c == '\0') {
			state	= OUT;
			nc--;
			print_bar(nc);
			nc=0;
			printf("\n");
		}
		else if (state == OUT) {
			state = IN;
			nw++;
	 }
	}
	
}
