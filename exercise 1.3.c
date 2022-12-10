/* Modify the temperature conversion program to print a heading above the table */

#include <stdio.h>

int main(int argc, char* argv[]) {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 200;	/* upper limit */
	step = 20; 	/* step size */  
	fahr = lower;  

	printf("F°\t C°\n");

	while (fahr <= upper) {  
		celsius = 5 * (fahr - 32) / 9;

		printf("%d\t %d\n", fahr, celsius);  
		fahr = fahr + step;  
	}
} 
