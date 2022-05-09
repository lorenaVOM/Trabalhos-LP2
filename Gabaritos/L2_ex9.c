// No dia da estreia do filme "Star Wars", prevendo um público numeroso, 
// um cinema decidiu coletar alguns dados estatísticos sobre o público presente, 
// a fim de exibir outros filmes populares. Para tal, foram coletadas as seguintes informações de cada espectador:
// a)	Idade
// b)	Grau de instrução, em anos.
// c)	Opinião sobre o filme: 1 = ótimo, 2 = regular ou 3 = péssimo.

// Crie agora um programa que leia a quantidade de pessoas presentes e calcule:
// a)	A média das idades das pessoas que responderam ótimo.
// b)	A idade do espectador mais velho e a do mais novo.
// c)	O percentual de pessoas com mais de 10 anos de instrução que responderam péssimo.

#include <stdio.h>

main() {
	int i, tot, tot3, idade, grau, op, conta3, conta1, soma1;
	int maior, menor;
	float media1, perc3;
	
	tot3 = conta3 = conta1 = soma1 = 0;
	
	printf("\nQuantas pessoas assistiram ao filme?");
	scanf("%d",&tot);
	printf("\nA seguir, responda as informacoes pedidas sobre cada espectador:");
	
	for (i=1; i<=tot; i++) {
		printf("\nQual a idade do espectador?");
		scanf("%d",&idade);	
		printf("\nQual seu grau de instrucao (em anos)?");
		scanf("%d",&grau);	
		printf("\nQual sua opiniao sobre o filme: 1 = otimo, 2 = regular ou 3 = pessimo?");
		scanf("%d",&op);	
			
		if (i == 1)
			maior = menor = idade;
		
		if (op == 1) {
			conta1++;
			soma1 += idade;
		}
		
		if (grau > 10) {
			tot3++;
			if (op == 3) 
				conta3++;
		}
			
		if (idade > maior)
			maior = idade;
		if (idade < menor)
			menor = idade;

	}
	
	perc3 = (float)conta3 / tot3 * 100;
	media1 = (float)soma1 / conta1;
	
	printf("\nA media de idade das pessoas que acharam o filme otimo e de %.0f anos", media1);
	printf("\n%.1f%% das pessoas com mais de 10 anos de instrucao acharam o filme pessimo", perc3);
	printf("\nO espectador mais velho tinha %d anos", maior);
	printf("\nO espectador mais novo tinha %d anos", menor);

}

