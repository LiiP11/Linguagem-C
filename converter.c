#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float pound,kg,conv;
	int op;

	printf("==========================\n");
    printf("\tCONVERTER\n");
    printf("==========================\n");
    printf("1 - Kilograms\t2 - Pounds\n");
    printf("\nChoose an option: ");
    scanf("%d",&op);
    system("clear");

	switch (op) {
		case 1:
			printf("Enter the weight in kilograms: ");
			scanf("%f",&kg);

			conv = kg * 2.2046;

			printf("\nKilogram: %.1f Kg\nPound: %.1f Lbs\n",kg,conv);
		break;

		case 2:
			printf("Enter the weight in pound: ");
			scanf("%f",&pound);

			conv = pound / 2.2046;

			printf("\nPound: %.1f Lbs\nKilogram: %.1f Kg\n",pound,conv);
		break;
	}
	
	getchar();
	return 0;
}	