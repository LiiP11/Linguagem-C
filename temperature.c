#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float celsius,fahreneit,conv;
    int op;

    printf("===================================\n");
    printf("\tCONVERT TEMPERATURE\n");
    printf("===================================\n");
    printf("1 - Celsius\t2 - Fahreneit\n");
    printf("\nChoose an option: ");
    scanf("%d",&op);
    system("clear");
        
    switch(op){
        case 1:
            printf("Enter the temperature in degrees Celsius: ");
            scanf("%f",&celsius);

            conv = celsius * 1.8 + 32;

            printf("\nCelsius: %.1f C\nFahreneit: %.1f F\n",celsius,conv);
        break;

        case 2:
            printf("Enter the temperature in degrees Fahreneit: ");
            scanf("%f",&fahreneit);

            conv = (fahreneit-32) / 1.8;
    
            printf("\nFahreneit: %.1f F\nCelsius: %.1f C\n",fahreneit,conv);
        break;
    }
    getchar();
    return 0;
}