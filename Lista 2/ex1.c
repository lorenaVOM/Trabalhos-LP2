//Entre com uma lista de números inteiros positivos (finalize a leitura com um número negativo) e, para cada número lido, imprima todos os seus divisores.

#include <stdio.h>
#include <stdlib.h>

main () {

  int num;

  printf ("Digite um número para ver seus divisores (-1 para parar): ");
  scanf ("%d", &num);

  printf("\n D(%d): ", num);

  while (num >= 0) {
    printf ("Digite um número para ver seus divisores (-1 para parar): ");
    scanf ("%d", &num);
    if (num == -1) {
      break;
    }
    for (int c = 1; c <= num; ++c) {
      if (num % c == 0) {
        printf (" %d ", c);
      }
    }
  }

  return 0;

}