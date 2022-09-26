#include <stdio.h>

int main(int argc, char* argv[]){
	int n1,n2,s;

	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite outro numero: ");
	scanf("%d",&n2);

	s = (n1+n2);

	printf("A soma é: %d\n",s);
	return 0;
}