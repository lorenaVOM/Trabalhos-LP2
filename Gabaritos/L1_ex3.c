// Faça um programa em C que leia um número N e imprima o N linhas no formato abaixo. 
// Por exemplo: foi lido o número 5 então vou imprimir as seguintes 5 linhas:
// *
// ***
// *****
// *******
// *********

#include <stdio.h>

main() {
	int i, j, N, qtd;
	
	printf("\nDigite um numero inteiro:");
	scanf("%d",&N);
	
	for (i=0; i<N; i++) {
		printf("\n");
		for (j=N-i+1; j>0; j--)
			printf(" ");
		qtd = 2*i+1;
		for (j=1; j<=qtd; j++)
			printf("*");
	}
}
