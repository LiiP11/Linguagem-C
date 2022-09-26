#include <stdio.h>

int num;

void verifica(){

	if (num > 0)
		printf("Numero Positivo\n");
	else if (num < 0)
		printf("Numero negativo\n");
	else
		printf("Zero\n");
}

int main(){

	printf("Digite um numero: ");
	scanf("%d",&num);
	verifica();
	printf("\n");
	return 0;
}