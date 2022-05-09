
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	double x, seno, termo, expo = 1;
	int i, j, k;
	long int fat, pot;
	
	seno = 0;
	printf("\nDeseja calcular o seno de qual numero?");
	scanf("%f",&x);
	x = x*(0.0174533);  // para converter para radianos
	printf("\nx = %.2lf", x);
	
	for (i = 10; i<=20; i++) {
		for (j = 0; j<=i; j++) {
			fat = 1;
			for (k=1; k<=expo; k++)
				fat *= k;
			pot = x;	
			for (k=1; k<=expo; k++)
				pot *= pot;
			//termo = pow(x,expo);
			printf("\npot = %d", pot);	
			termo = termo/fat;
					printf("\ntermo = %.2f, j=%d", termo,j);	
			if ((j+1) % 2 == 0)
				seno -= termo;
			else
				seno += termo;
		printf("\nO seno de %d, calculado com %d termos é: %.2f, termo = %.2f", x, i, seno, termo);		
		expo += 2;		
		}
		getch();
//		printf("\nO seno de %d, calculado com %d termos é: %.2f", x, i, seno);
	}
}