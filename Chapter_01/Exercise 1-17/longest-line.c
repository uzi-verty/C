#include <stdio.h> 
#define MAXLINE 1000	/* maximum input line size */

int get_line(char s[]);
void copy(char to[], char from[]);

/* print longest input line */
int main(){

	int len;		/* current line length */ 
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = get_line(line)) > 0) {

		if (len > max) {
			max = len;
			copy(longest, line);
		}

		if (len > 80) /* there was a line */
			printf("\nLength = %d\n%s", len, line );
	}

	if (max > 0) /* there was a line */
		printf("\nLength = %d\n%s", max, longest);
	
	return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[]){

	int c, i;

	for (i=0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
	}
	
	s[i++] = '\0';
	/* when the array is full, the counter keeps increasing if the line is bigger than the MAXLINE */
	while (c != EOF && c != '\n'){
		i++;
		c = getchar();
	
	}

	return i;
}

/* copy 'from' into 'to'; assuming both are same size */
void copy(char to[], char from[]){

	int i=0;

	while ((to[i] = from[i]) != '\0') 
		i++;
}
