#include <stdio.h>

float mean(float a[],int n){
	int i,j;
	float tot = 0;
	float mean = 0;

	for ( i = 0; i < n; i++){
		for (j = 0; i < n; i++){
			tot = tot + a[i];
		}
	}

	mean = tot/n;
	return mean;
}

float median(float a[],int n){  
	float median = 0;
	int aux,i,j;

	for ( i = 0; i < n; i++){
		for ( j = i+1; j < n; j++){
			if (a[i] > a[j]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}

	//Calculation for even numbers 
	if (n % 2 == 0){
		int temp = (n/2)-1;

		for (int i = 0; i < n; i++){
			if (temp==i || (temp+1)==i){
				median = median + a[i];
			}
		}
		median = median/2;
	}
	
	//Calculation for odd numbers
	if (n % 2 == 1){
		int temp = (n/2)+0.5;

		for (int i = 0; i < n; i++){
			if (temp==i){
				median = median + a[i];
			}
		}
	}
	return median;
}

float mode(float a[],int n){
	int mode = 0; 
	int maxcont = 0; 
	int i, j;
	
	for (i = 0; i < n; i++){
		int cont = 0;
		
		for (j = 0; j < n; j++){
			if (a[j] == a[i])
				cont++;
		}

		if (cont > maxcont){
			maxcont = cont;
			mode = a[i];
		}
	}
	return mode;
}

int main(){
	int i;
	float vetor[8]; //change the value if you want to test with other numbers.
	int maxvetor=8; //change the value if you want to test with other numbers.

	printf("====================\n");
	printf(" MEAN MEDIAN MODE \n");
	printf("====================\n");

	for (i = 0; i < maxvetor; i++){
		printf("%d° number: ",i+1);
		scanf("%f",&vetor[i]);
	}

	printf("\nMEAN: \t%.1f\n",mean(vetor,maxvetor));
	printf("MEDIAN: %.1f\n",median(vetor,maxvetor));
	printf("MODE: \t%.0f\n",mode(vetor,maxvetor));

	return 0;
}