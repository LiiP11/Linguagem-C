#include <stdio.h>

int main() {
	
	int i,j,value;

	for ( i = 1; i < 11; i++) {
		printf("\n");

		for ( j = 1; j < 11; j++) { 
			value = i * j;
			printf("%d\t",value);
		}
	}

	return 0;
}
