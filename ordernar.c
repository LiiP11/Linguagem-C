#include <stdio.h>

int main() {
	int vetor[5];
	int i,j,aux;

	for ( i = 0; i < 5; i++) {
		printf("Digite o %d° numero: ",i+1);
		scanf("%d",&vetor[i]);
	}

	for ( i = 0; i < 4; i++) {
		for ( j = i+1; j < 5; j++) {
			if (vetor[i] > vetor[j]) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}

	printf("\nNUMEROS ORDENADOS:\n");

	for ( i = 0; i < 5; i++) {
		printf("%d ",vetor[i]);
	}

	return 0;
}