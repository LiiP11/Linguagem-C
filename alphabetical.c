#include <stdio.h>
#include <string.h>

int main() {
	int i,j;
	char name[3][20], aux[20];

	printf("Type three ramdom names:\n\n");

	for (i = 0; i < 3; i++){
		printf("%d° name: ",i+1);
		scanf("%s", name[i]);
	}

	for (i = 0; i < 3; i++) { 
		for (j = 0; j < 3; j++) {
			if (strcmp(name[j - 1], name[j]) > 0) {
				strcpy(aux, name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], aux);
			}
		}
	}

	printf("\nAphabetical order:\n\n");

	for (i = 0; i < 3; i++) {
		printf("%s\n", name[i]);
	}

	return 0;
}