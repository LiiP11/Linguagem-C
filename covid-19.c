
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bufferClean() {
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

struct cadastro {
	int codigo;
	char nome[30];
	char cpf[15];
	char vacina[30];
	char data[15];
	char lote[15];
}paciente[99];

int main() {
	int i,qtd,op,found;

	do {
		printf("=======================================\n");
		printf("\tCADASTRO DE VACINAS\n");
		printf("=======================================\n");
		printf("\t\tM E N U\n");
		printf("=======================================\n");
		printf("\n1 - CADASTRAR VACINA\n2 - LISTAR APLICACOES");
		printf("\n3 - CONSULTAR CPF\n4 - SAIR\n\n");
		printf("=======================================\n");
		printf("\nEscolha a opcao desejada: ");
		scanf("%d",&op);
		bufferClean();
		system("clear");

		switch (op) {
			case 1:
				printf("Deseja fazer quantos cadastros: ");
				scanf("%d",&qtd);
				bufferClean();

				for (i = 0; i < qtd; i++) {
					printf("=======================\n");
					printf("Codigo: %d\n",i+1);
					printf("=======================\n");
					printf("Digite o nome: ");
					scanf("%s[^\n]",paciente[i].nome);
					bufferClean();

					printf("Digite o CPF: ");
					scanf("%s[^\n]",paciente[i].cpf);
					bufferClean();

					printf("Nome da vacina: ");
					scanf("%s[^\n]",paciente[i].vacina);
					bufferClean();

					printf("Data da vacinacao: ");
					scanf("%s[^\n]",paciente[i].data);
					bufferClean();

					printf("Digite o numero do lote: ");
					scanf("%s[^\n]",paciente[i].lote);
					printf("=======================\n");
					bufferClean();
					system("clear");
				}
			break;

			case 2:
				for (i = 0; i < qtd; i++) {
					printf("=======================\n");
					printf("Codigo: %d\n",i+1);
					printf("=======================\n");
					printf("Nome: %s\n",paciente[i].nome);
					printf("CPF: %s\n",paciente[i].cpf);
					printf("Vacina: %s\n",paciente[i].vacina);
					printf("Data: %s\n",paciente[i].data);
					printf("Lote: %s\n",paciente[i].lote);
					printf("=======================\n\n");
				} 
				getchar();
				system("clear");
			break;

			case 3:
				char pesquisa[15];
				printf("Informe o CPF: ");
				scanf("%s",pesquisa);
				found=0;

				for (i = 0; i < qtd; i++) {
					if (strcmp(pesquisa,paciente[i].cpf)==0){
						bufferClean();
						printf("=======================\n");
						printf("Codigo: %d\n",i+1);
						printf("=======================\n");
						printf("Nome: %s\n",paciente[i].nome);
						printf("CPF: %s\n",paciente[i].cpf);
						printf("Vacina: %s\n",paciente[i].vacina);
						printf("Data: %s\n",paciente[i].data);
						printf("Lote: %s\n",paciente[i].lote);
						printf("=======================\n");
						found=i;					
					}
				}

				if(!strcmp(pesquisa,paciente[found].cpf)==0) {
					printf("\nCPF Invalido!\n");
					getchar();
				}	
				getchar();
				system("clear");
			break;

			case 4:
				printf("Saindo...\n");	
			break;

			default:
				printf("Opçao invalida!\n");
				getchar();
				system("clear");
			break;
		}
	} while (op != 4);

	getchar();
	return 0;
}