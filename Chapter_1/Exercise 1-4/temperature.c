#include <stdio.h>

/*	print Celsius-Fahrenheit table
			for celsius = 0, 20, ..., 300; floating point version*/

int main(){

	float fahr, celsius;
	int lower, upper, step;

	lower = -40;			/*	lower limit of temperature table */
	upper = 100;		/*	upper limit */
	step = 10;			/*	step size */

	printf("Celsius-Fahrenheit table");
	printf("\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.5;
		printf("%3.0f %8.0f\n", celsius, fahr);
		celsius = celsius + step;
	
	}

}
