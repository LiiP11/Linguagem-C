/*Write a program to count blanks, tabs, and newlines*/
#include <stdio.h>

int main() {
    int c, lines, tab, blank;
	char phrase[50];

    lines = 0;
    tab = 0;
    blank = 0;

	printf("Write a sentence: ");
	scanf("%s", &phrase);

    while ( (c = getchar()) != EOF) {
        if (c == '\n')
            ++lines; 

        if (c == '\t')
            ++tab;

        if (c == ' ')
            ++blank;
    }

	/*Pressione "CTRL + D" para exibir o contador*/
    printf("\nlines: %d\nTabs: %d\nBlanks: %d\n", lines, tab, blank);
    return 0;
}