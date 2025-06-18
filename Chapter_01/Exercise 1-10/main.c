#include <stdio.h>

/*	replaces tab, backspace and backslash with the corresponding escape sequence	*/

int main(){

	int c; 
	
	while ((c = getchar()) != EOF) {
	
		if (c == '\t') {
			c = 0;
			printf("\\t");
		}
		if (c == '\\') {
			c = 0;
			printf("\\\\");
		}
		if (c == '\b') {
			c = 0;
			printf("\b");
		}
		putchar(c);
	}
/*	to escape the while loop EOF must be emulated (Crtl + D)	*/

}
