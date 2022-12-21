/* Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>  
#define SIZE 128 /* number of characters in the ASCII character set */

int main() {
	int c, i, reference;
	int ncharacters[SIZE];

	printf("Type a sentence..\n");

	for (i = 0; i < SIZE; ++i) {
		ncharacters[i] = 0;
	}
	reference = 0;

	while ((c = getchar()) != EOF) {
		++ncharacters[c];
	}

	/* Routine for creating the vertical histogram */
	/* Find the largest frequency and set as reference */

	for (i = 0; i < SIZE; ++i) {
		if (ncharacters[i] > reference) {
			reference = ncharacters[i];
		}
	}

	/* Routine for creating the actual vertical histogram */
	while (reference > 0) {
		putchar(' ');

		for (i = 0; i < SIZE; ++i) {
			if (ncharacters[i] > 0) {
				if (ncharacters[i] >= reference) {
					putchar('|');
				} else {
					putchar(' ');
				} putchar(' ');
			}
		}

		printf("\n");
		--reference;
	}

	/* Label on the x-axis */
	for (i = 0; i < SIZE; ++i) {
		if (ncharacters[i] > 0) {
			if (i == ' ') {
				printf("BS"); //space
			} else if (i == '\t') {
				printf("HT"); //tabs
			} else if (i == '\n') {
				printf("LF"); //enter
			} else
				printf("%2c",i);
		}
	}
	printf("\n");
}