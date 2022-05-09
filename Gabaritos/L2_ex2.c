//Leia um número inteiro menor do que 10 e imprima todos os seus múltiplos 
// dentro do intervalo [1, 100], em ordem decrescente. Ex: num = 8
// Múltiplos = 88, 80, 72, 64, 56, 48, 40, 32, 24, 16, 8, 1

#include <stdio.h>

main() {
	int num, i;
	
	printf("\nDigite um numero inteiro, menor do que 10, encerrando o programa com um numero negativo: ");
	scanf("%d",&num);
	
	while (num >= 0) {
		while (num > 10) {
			printf("\n\nO numero precisa ser menor do que 10! Tente novamente: ");
			scanf("%d",&num);			
		}
		if (num == 0)
			printf("\nO numero 0 nao possui multiplos\n");
		else {
			printf("\nOs multiplos de %d no intervalo [1, 100] sao: ", num);
			for (i = 1; i<=100; i++)
				if (i % num == 0)
					printf(", %d", i);
		}
		printf("\n\nDigite um numero inteiro, menor do que 10, encerrando o programa com um numero negativo: ");
		scanf("%d",&num);
	}
}
