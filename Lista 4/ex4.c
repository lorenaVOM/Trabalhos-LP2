# include <stdio.h>
# include <stdlib.h>

# define TAM 20

main () {

  int vetor [TAM];
  int maior, cont1 = 0, cont2 = 0;

  
  for (int i = 0; i < TAM; i++) {
    printf ("Digite um número inteiro positivo para seu vetor (-1 para parar): ");
    scanf ("%d", &vetor[i]);
    if (vetor [i] < 0) {
      break;
    }
    cont1++;
  }

  for (int i = 0; i < cont1; i++) {
    if (i == 0) {
      maior = vetor [i];
    }
    else if (vetor [i] > maior) {
      maior = vetor [i];
    }
  }

  for (int i = 0; i < cont1; i++) {
    if (vetor [i] == maior) {
      cont2 += 1;
    }
  }

  printf ("\nVetor: ");
  for (int i = 0; i < cont1; i++) {
    printf ("%d ", vetor [i]);
  }

  printf ("\nMaior valor: %d\nNúmero de vezes que ele apareceu: %d", maior, cont2);

  return 0;
}