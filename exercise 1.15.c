/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */ 

#include <stdio.h>
#include <stdlib.h>

/* convert celsius to fahreneit */
float convcel(float a) {
	float conv;
	return conv = a * 1.8 + 32;;
} 

/* convert fahreneit to celsius */
float convfah(float a) {
	float conv;
	return conv = (a - 32) / 1.8;
}

int main() {
    float celsius,fahreneit;
    int op;

    printf("===================================\n");
    printf("\tCONVERT TEMPERATURE\n");
    printf("===================================\n");
    printf("1 - Celsius\t2 - Fahreneit\n");
    printf("\nChoose an option: ");
    scanf("%d",&op);
    system("clear");

    switch(op) {
        case 1:
            printf("Enter the temperature in degrees Celsius: ");
            scanf("%f",&celsius);

            printf("\nCelsius: %.1f °C\nFahreneit: %.1f °F\n",celsius,convcel(celsius));
        break;

        case 2:
            printf("Enter the temperature in degrees Fahreneit: ");
            scanf("%f",&fahreneit);

            printf("\nFahreneit: %.1f °F\nCelsius: %.1f °C\n",fahreneit,convfah(fahreneit));
        break;
    }

    getchar();
    return 0;
}