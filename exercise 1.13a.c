/* Write a program to print a histogram of the lengths of words in its input. It is  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>  
#define IN 1
#define OUT 0

int main() {
	int c, state;
	state = OUT;

	printf("Type a sentence..\n");

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN)
			putchar('=');
	}
}