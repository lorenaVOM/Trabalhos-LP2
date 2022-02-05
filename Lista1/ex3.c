//Faça um programa em C que leia um número N e imprima o N linhas no formato abaixo. Por exemplo: foi lido o número 5 então vou imprimir as seguintes 5 linhas:

#include <stdio.h>
#include <stdlib.h>

main () {
  int num, cont, qntd_crt;

  cont = 0;
  qntd_crt = 1;

  printf ("Digite o número de linhas da sua árvore: ");
  scanf ("%d", &num);

  while (cont < num) {
    for (int c = 0; c < qntd_crt; c += 1 ) {
      printf ("*");
    }
    qntd_crt += 2;
    printf ("\n");
    cont += 1;
  }

}