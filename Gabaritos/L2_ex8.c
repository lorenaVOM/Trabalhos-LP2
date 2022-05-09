// Escreva um programa que leia um número e imprima a tabuada desse número, exatamente no formato abaixo quando, por exemplo, num = 4:
// 	4 x 1 = 4
// 	4 x 2 = 8
// 	...
//  4 x 10 = 40


#include <stdio.h>

main() {
	int i, num;
	
	printf("\nDigite um numero inteiro:");
	scanf("%d",&num);
	
	// esse nem deveria estar na lista, de tão bobo! Foi por distração...
	
	for (i=1; i<=10; i++)
		printf("\n %d x %d = %d", num, i, num*i);

}
