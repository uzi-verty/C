#include <stdio.h>

/*	print Celsius-Fahrenheit table (2.0)
			for celsius = 0, 20, ..., 300; floating point version*/


void C_to_F(int lower, int upper, int step){


	float fahr, celsius;


	printf("Celsius-Fahrenheit table");
	printf("\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.5;
		printf("%3.0f %8.0f\n", celsius, fahr);
		celsius = celsius + step;
	
	}

}

int main(){

	C_to_F(-40, 100, 10);

	return 0;
}
