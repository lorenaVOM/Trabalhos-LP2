// Escreva um programa que leia um n�mero e imprima a tabuada desse n�mero, exatamente no formato abaixo quando, por exemplo, num = 4:
// 	4 x 1 = 4
// 	4 x 2 = 8
// 	...
//  4 x 10 = 40


#include <stdio.h>

main() {
	int i, num;
	
	printf("\nDigite um numero inteiro:");
	scanf("%d",&num);
	
	// esse nem deveria estar na lista, de t�o bobo! Foi por distra��o...
	
	for (i=1; i<=10; i++)
		printf("\n %d x %d = %d", num, i, num*i);

}
