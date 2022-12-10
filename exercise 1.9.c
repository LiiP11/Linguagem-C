/* Write a program to copy its input to its output, replacing each string of one or  more blanks by a single blank. */

#include <stdio.h>

int main() {
	int nb = 0;
	int c;

	printf("Type a sentence..\n");

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++nb;
		}

		if (c != ' ') {
			if (nb >= 1) {
				putchar(' ');
				nb = 0;
			}
			putchar(c);
		}
	}
}