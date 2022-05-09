//2) Escreva um programa que contenha uma fun��o que receba x como par�metro e retorne 
//um valor de Y dado que:
// .....
//Utilize uma fun��o para cada op��o de c�lculo de Y.

#include <stdio.h>

double calcYpos (float x) {
	int i;
	double termo, y;
	
	for (i=1; i<=100; i++) {
		termo = (x + i)/i;
		y += termo;
	}
}

double calcYneg (float x) {
	int i;
	double termo, y;
	
	for (i=1; i<=100; i++) {
		termo = (x*x + i)/(101-i);
		y += termo;
	}
}

main() {
	float x;
	double y;
	
	printf("\nDigite um valor para x:\n");
	scanf("%f",&x);
	
	if (x > 0)
		y = calcYpos(x);
	else
		y = calcYneg(x);
	
	printf("O valor da funcao Y eh: %lf", y);	
	
}
