// Faça um programa em C que leia vários números até encontrar o número 999. 
// A seguir, imprima a quantidade de números lidos, a média dos números, o maior e o menor número encontrado.

#include<stdio.h> 

void main () {
	int num, cont = 0, maior, menor;
	long int soma = 0;
	float media = 0;
	
	printf("Entre com uma sequencia de numeros inteiros, finalizando com 999:");
	scanf("%d",&num);

	maior = menor = num;
	
	while (num != 999){
		soma += num;
		cont += 1;
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;
		printf("\nEntre com uma sequencia de numeros inteiros, finalizando com 999:");
		scanf("%d",&num);		
	}
	
	if (cont > 0) {
		media = soma/cont;
		printf("\n\nForam lidos %d numeros", cont);
		printf("\nMaior: %d", maior);
		printf("\nMenor: %d", menor);
		printf("\nMedia dos numeros validos: %2.1f", media);
	}
	
}
