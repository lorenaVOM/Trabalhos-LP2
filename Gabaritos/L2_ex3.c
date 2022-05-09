// Entre com a idade de várias pessoas (finalize a leitura com um número negativo) e 
// imprima a quantidade de pessoas que tinham mais de 21 anos e a média de idade das pessoas com mais de 60.

#include <stdio.h>

main() {
	int idade, cont = 1, cont21, cont60, soma60;
	float media60;
	
	cont21 = cont60 = soma60 = 0;
	
	printf("\nEntre com uma lista de idades, encerrando o programa com um numero negativo.");
	printf("\nEntre com a idade da 1a pessoa:");
	scanf("%d",&idade);
	
	while (idade > 0) {
		cont++;		
		if (idade > 21)
			cont21++;
		if (idade > 60) {
			cont60++;
			soma60 += idade;
		}
		
		printf("\nEntre com a idade da %da pessoa:", cont);
		scanf("%d",&idade);
	}
	
	printf("\nExistem no grupo %d pessoas com mais de 21 anos", cont21);
	if (cont60 > 0) {
		media60 = soma60 / cont60;
		printf("\nA media da idade das pessoas com mais de 60 anos eh: %2.1f", media60);
	}
	else 
		printf("\nNao havia ninguem com mais de 60 anos no grupo");
}
