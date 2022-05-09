//Escrever um programa que l� um n�mero n�o determinado de valores para m, todos inteiros e 
//positivos, um de cada vez. Se m for par, verificar quantos divisores m possui, imprimindo 
//essa informa��o. Se m for �mpar e menor do que 10, calcular e escrever o fatorial de m. 
//Se m for �mpar e maior ou igual a 10, calcular e imprimir a soma dos inteiros de 1 at� m. 
//O programa dever� ser desenvolvido utilizando um menu de op��es e fun��es para cada op��o de m.

#include <stdio.h>

long int fatorial (int n) {
    long int fat;
    
	if(n == 0)
		fat = 1;
	else
		fat = n * fatorial(n-1); 
		
	return fat;	

};

long int somaints (int n) {
	int i;
	long int soma = 0;
	
	for (i=1; i<=n; i++) {
		soma += i;
	}
	return soma;
}


void divisores (int n) {
	int i;
	
	printf("\nOs divisores de %d sao: ", n);
	for (i=1; i<=n; i++) {
		if (n % i == 0)
			printf("%d, ",i);
	}
}

main() {
	int x;
		
	printf("\nDigite um valor para x: ");
	scanf("%d",&x);
	
	while (x > 0) {
		if (x % 2 == 0)
			divisores(x);
		else if (x < 10)
			printf("\nO fatorial de %d eh: %ld", x, fatorial(x));
		else 
			printf("\nA soma dos inteiros de 1 ate %d eh: %ld", x, somaints(x));	
		
		printf("\n\nDigite um valor para x: ");
		scanf("%d",&x);		
	}	
}
