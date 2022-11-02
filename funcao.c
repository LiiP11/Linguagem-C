#include <stdio.h>

float media(float a,float b) {
	float m;
	m = (a + b)/2;
	return m;
}

int main() {
	float n1,n2;

	printf("Digite a 1° nota:");
	scanf("%f",&n1);
	printf("Digite a 2° nota: ");
	scanf("%f",&n2);

	printf("\nMedia: %.1f\n",media(n1,n2));

	return 0;
}