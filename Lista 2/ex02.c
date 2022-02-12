//Leia um número inteiro menor do que 10 e imprima todos os seus múltiplos dentro do intervalo [1, 100], em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

main () {
  
  int num, result;

  printf ("Digite um número inteiro menor que 10: ");
  scanf ("%d", &num);

  printf ("M(%d): ", num);

  for (int c = 100; c >= 1; --c) {
    result = num * c;
    if (result < 100) {
      printf ("%d ", result);
    }
  }

  return 0;

}