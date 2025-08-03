#include <stdio.h> 
#include <stdbool.h>
#define MAXLINE 1000
int main(){

	bool isblank = 0;
	int c, i =0;
	char s[MAXLINE];

	while ((c = getchar()) != EOF && i < MAXLINE -1) {
		if (c != ' ' &&  c != '\t') {
			s[i++] = c;
				isblank = 1;
		}
		else {
			if ( isblank ) {
				s[i++] = ' ';
			}
			isblank = 0;
		}
	}
	if ( s[i - 1] == ' ') {
		i--;	
	}
	s[i] = '\0';
	printf("%s\n", s);

	return 0;
}

