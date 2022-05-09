// Leia um conjunto de n�meros inteiros, at� que um n�mero negativo seja digitado. Ao final, calcule e imprima:
// a)	A quantidade de n�meros v�lidos lida
// b)	O percentual de n�meros pares
// c)	 A m�dia dos n�meros �mpares
// d)	O maior e o menor n�mero lido

#include <stdio.h>

main() {
	int num, cont, contaPares, contaImpares, somaImpares;
	int maior, menor;
	float mediaImpares, percPares;
	
	cont = contaPares = contaImpares = somaImpares = 0;
	
	printf("\nEntre com uma lista de numeros inteiros, encerrando o programa com um numero negativo.");
	printf("\n\nEntre com um numero:");
	scanf("%d",&num);
	maior = menor = num;
	
	while (num > 0) {
		cont++;		
		if ((num % 2)== 0)
			contaPares++;
		else {
			contaImpares++;
			somaImpares += num;
		}
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;

		printf("Entre com um numero:");
		scanf("%d",&num);
	}
	
	percPares = (float)contaPares / cont * 100;
	mediaImpares = (float)somaImpares / contaImpares;
	
	printf("\nTotal de numeros validos lidos = %d", cont);
	printf("\nPercentual de numeros pares = %.2f%%", percPares);
	printf("\nMedia dos numeros impares =  %.2f", mediaImpares);
	printf("\nMaior numero lido = %d", maior);
	printf("\nMenor numero lido = %d", menor);

}

