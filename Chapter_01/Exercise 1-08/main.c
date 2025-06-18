#include <stdio.h>

/*	program to count blanks, tabs, and newlines.	*/

int main(){

	int c, newline, blanks, tabs;
	
	newline = blanks = tabs = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			newline++;
		}
		if (c == ' ') {
			blanks++;
		}
		if (c == '\t') {
			tabs++;
		}
	
	}
/*	to escape the while loop EOF must be emulated (Crtl + D)	*/
	printf("newline: %d\nblanks: %d\ntabs: %d\n", newline, blanks, tabs);

}
