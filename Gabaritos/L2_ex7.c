// Escreva um programa que informe a quantidade total de calorias de uma refeição, 
// a partir da escolha dos itens do cardápio, que consta de um prato principal, 
// uma bebida e uma sobremesa, segundo a tabela abaixo:

// 		PRATO PRINCIPAL				BEBIDA								SOBREMESA
// 1 - Vegetariano: 180 cals	1 - Chá (lata): 80 cals				1 - Abacaxi: 75 cals
// 2 - Peixe: 230 cals			2 - Suco de laranja: 150 cals		2 - Sorvete diet: 110 cals
// 3 - Frango: 250 cals			3 - Suco de melão: 70 cals			3 - Mousse diet: 60 cals
// 4 - Carne: 350 cals			4 - Refrigentante diet: 2 cals		4 - Mousse chocolate: 250 cals

#include <stdio.h>
#include <math.h>

main() {
	int op1, op2, op3;
	int calorias = 0;
	
	printf("\nEscolha uma opcao de prato principal:");
	printf("\n\n1 - Vegetariano: 180 cals");
	printf("\n2 - Peixe: 230 cals");
	printf("\n3 - Frango: 250 cals");
	printf("\n4 - Carne: 350 cals\nOpcao:");
	scanf("%d", &op1);
	
	switch(op1) {
		case 1: calorias += 180;
				break;
		case 2: calorias += 230;
				break;
		case 3: calorias += 250;
				break;
		case 4: calorias += 350;
				break;
	}

	printf("\nEscolha uma opcao de bebida:");
	printf("\n\n1 - Cha (lata): 80 cals");
	printf("\n2 - Suco de laranja: 150 cals");
	printf("\n3 - Suco de melao: 70 cals");
	printf("\n4 - Refrigentante diet: 2 cals");
	printf("\n5 - Sem suco\nOpcao:");   // essa opção não tinha no enunciado, só coloquei pq achei mais legal
	scanf("%d", &op2);
	
	switch(op2) {
		case 1: calorias += 80;
				break;
		case 2: calorias += 150;
				break;
		case 3: calorias += 70;
				break;
		case 4: calorias += 2;
				break;
  		// se escolher a opção 5, não vai somar nada, então nem vou colocar => lembrando que isso não foi pedido!				
	}

	printf("\nEscolha uma opcao de sobremesa:");
	printf("\n\n1 - Abacaxi: 75 cals");	
	printf("\n2 - Sorvete diet: 110 cals");
	printf("\n3 - Mousse diet: 60 cals");
	printf("\n4 - Mousse chocolate: 250 cals");
	printf("\n5 - Sem sobremesa\nOpcao:");   // fiz de novo :)
	scanf("%d", &op3);
	
	switch(op3) {
		case 1: calorias += 75;
				break;
		case 2: calorias += 110;
				break;
		case 3: calorias += 60;
				break;
		case 4: calorias += 250;
				break;
	}

	printf("\n\nSuas escolhas somaram %d calorias!", calorias);

}

