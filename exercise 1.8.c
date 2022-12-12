/* Write a program to count blanks, tabs, and newlines */

#include <stdio.h>

int main() {
    int c, lines, tab, blank;

    lines = 0;
    tab = 0;
    blank = 0;

	printf("Type a sentence.. (then press 'CTRL + D')\n");

    while ( (c = getchar()) != EOF) {
        if (c == '\n')
            ++lines; 

        if (c == '\t')
            ++tab;

        if (c == ' ')
            ++blank;
    }

    printf("\nlines: %d\nTabs: %d\nBlanks: %d\n", lines, tab, blank);
    return 0;
}