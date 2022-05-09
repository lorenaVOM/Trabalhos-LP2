// Escreva um programa que calcula o valor do quociente e resto de um inteiro dividido por outro, 
// usando o m�todo de subtra��es sucessivas. Ex: 9/2 => 9-2=7 => 7-2=5 => 5-2=3 => 3-2=1. 
// Ent�o: quociente = 4 (pq foram feitas 4 subtra��es do n�mero 2) e resto = 1

#include <stdio.h>

main() {
	int divisor, dividendo, quociente = 0, resto, i;
	
	printf("\nDigite o divisor da operacao:\n ");
	scanf("%d",&divisor);
	printf("\nDigite o dividendo da operacao:\n ");
	scanf("%d",&dividendo);

	if (dividendo == 0)
		printf("\nA divis�o por zero nao eh permitida!\n");
	else {
		resto = divisor;
		while (resto >= dividendo) {
			quociente++;
			resto -= dividendo;
		}
		
		printf("\n\nA divisao inteira de %d por %d tem quociente = %d e resto = %d.", divisor, dividendo, quociente, resto);
	}
}
