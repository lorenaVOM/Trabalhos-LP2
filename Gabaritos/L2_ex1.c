// Entre com uma lista de n�meros inteiros positivos (finalize a leitura com um n�mero negativo) e, 
// para cada n�mero lido, imprima todos os seus divisores.

#include <stdio.h>

main() {
	int num, i;
	
	printf("\nDigite numeros inteiros, encerrando o programa com um numero negativo: ");
	scanf("%d",&num);
	
	while (num >= 0) {
		if (num == 0)
			printf("\nO numero 0 n�o possui divisores\n");
		else {
			printf("\nOs divisores de %d sao: 1 ", num);
			for (i = 2; i<=num; i++)
				if (num % i == 0)
					printf(", %d", i);
		}
		printf("\n\nDigite numeros inteiros, encerrando o programa com um numero negativo: ");
		scanf("%d",&num);
	}
}
