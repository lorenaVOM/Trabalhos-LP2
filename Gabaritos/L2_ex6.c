// Dado um pa�s A, com 5.000.000 de habitantes e taxa de natalidade de 3% ao ano, 
// e um pa�s B, com 7.000.000 de habitantes e taxa de natalidade de 2% ao ano, 
// calcule e imprima o tempo necess�rio para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B.

#include <stdio.h>

main() {
	float popA = 5000000, popB = 7000000;
	int anos = 0;
	
	while (popB > popA) {
		anos++;		
		popA *= 1.03;
		popB *= 1.02;
	}
		
	printf("\nSerao necessarios %d anos para que a populacao de A ultrapasse a populacao de B:", anos);
	printf("\nE, nesse dia, a populacao dos paises sera de:");
	printf("\nPopulacao de A: %d", (int) popA);
	printf("\nPopulacao de B: %d", (int) popB);
	
}
