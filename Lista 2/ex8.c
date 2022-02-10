//Escreva um programa que leia um número e imprima a tabuada desse número, exatamente no formato abaixo quando, por exemplo, num = 4:

#include <stdio.h>
#include <stdlib.h>

main () {

  int num, result;

  printf ("Digite um número inteiro para visualizar sua tabuada: ");
  scanf ("%d", &num);

  for (int c = 1; c <= 10; c++) {
    result = num * c;
    printf ("\n4x%d = %d", c, result);
  }

  return 0;

}