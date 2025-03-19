#include <stdio.h>

/*	program to replace blanks with one blank	*/
/*	tabs do not count as blanks to this specific program	*/

int main(){

	int c, newline, blanks, tabs;
	
	newline = blanks = tabs = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
			continue;
		}
		if (blanks > 0) {
			putchar(' ');
			blanks = 0;
		}
		putchar(c);
	
	}
/*	to escape the while loop EOF must be emulated (Crtl + D)	*/

}
