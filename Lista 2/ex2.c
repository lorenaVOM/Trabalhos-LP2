//Leia um número inteiro menor do que 10 e imprima todos os seus múltiplos dentro do intervalo [1, 100], em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

main () {
  
  int num;

  printf ("Digite um número inteiro menor que 10: ");
  scanf ("%d", &num);

  for (int c = 100; c >= 1; --c) {
    printf ("%d ", num * c);
  }

  return 0;

}