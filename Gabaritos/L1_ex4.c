// O valor do seno pode ser obtido com atrav�s da s�rie a seguir:
// sen x = X - X3/3! + X5/5! - X7/7! + . . .
// Escreva um programa que tabele os valores para um dado valor de X (escolhido pelo usu�rio), de 10 a 20 termos.

#include <stdio.h>
#include <math.h>

#define PI 3.14159

main() {
	double seno, termo, x, pot, expo = 1, fat;
	int i, j, k;
	
	seno = 0;
	printf("\nDeseja calcular o seno de qual grau?");
	scanf("%lf",&x);
	x = x*(PI/180);  // para converter para radianos. Esqueci disso no enunciado, ent�o n�o vou cobrar
	
	for (i = 10; i<=20; i++) {
		for (j = 0; j<=i; j++) {
			fat = 1;
			for (k=1; k<=expo; k++)
				fat *= k;
			pot = pow(x,expo);
			termo = (double) pot/fat;
			if ((j+1) % 2 == 0)
				seno -= termo;
			else
				seno += termo;
		expo += 2;		
		}
		printf("\nO seno de %.10lf, calculado com %d termos eh: %.20lf", x, i, seno);
	}
}
