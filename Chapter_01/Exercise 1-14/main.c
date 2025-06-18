#include <stdio.h>

/*	 a program that prints a histogram of the frequencies of different characters in its input	*/

/*	prints the bar	*/
void print_bar(int x){
	for (int i = 0; i < x ; i++){
		printf(".");
	}	
	printf(">");
}

int main(){
	
	int c;
	int n_characters[26] = {0};

	while ((c = getchar()) != EOF) {
		if (c-32 >= 'A' && c-32 <= 'Z') {		/*	checks the letters and turns them into uppercases	*/
			c-=32;
			n_characters[c-'A']++;
		}
	
	}
	/*	prints the array n_characters	*/
	for (int i = 0; i < sizeof(n_characters)/sizeof(n_characters[0]); i++) {
		putchar(i+65);
		print_bar(n_characters[i]);	
		printf("\n");
	}


}
